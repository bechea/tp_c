/*
 * gestionnaire-objets-multi.c
 *
 *  Created on: Oct 21, 2015
 *      Author: alexis
 */

#include <stdio.h>
#include <stdlib.h>
#include "gestionnaire-objets-multi.h"

/*Initialise un Gestionnaire vide (IHM)*/
void initGestionnaire(GestionnaireObjetMultimedia* g)
{
	g->nbObj = 0;
}

/*Vide un gestionnaire (IHM)*/
void freeGestionnaire(GestionnaireObjetMultimedia* g)
{
	int i;
	char init[10] = "NULL";

	for(i = 0 ; i < (g->nbObj) ; i++)
	{
		g->tab[i].type = NONE;
		g->tab[i].date.jour = 0;
		g->tab[i].date.mois = 0;
		g->tab[i].date.annee = 0;
		strcpy(g->tab[i].nom, init);
		strcpy(g->tab[i].way, init);
	}

	g->modif = NONE;
	g->nbObj = 0;
}

/*Ajout un objet multimedia dans le gestionnaire*/
void ajoutObjetMultimedia(GestionnaireObjetMultimedia* g,char * nom, char * chemin, int jour, int mois, int annee, TypeObjetMultimedia type)
{
	int k = g->nbObj;
	if(g->nbObj != OBJET_MAX)
	{
		strcpy(g->tab[k].nom, nom);
		strcpy(g->tab[k].way, chemin);
		g->tab[k].date.jour = jour;
		g->tab[k].date.mois = mois;
		g->tab[k].date.annee = annee;
		g->tab[k].type = type;

		g->nbObj++;
	}
	else
	{
		printf("Plus de places");
	}
}

/*Supprime un objet multimedia du gestionnaire*/
void suppressionObjetMultimedia(GestionnaireObjetMultimedia* g, char * nom)
{
	int i = 0;
	int k;
	char init[10] = "NULL";

	while(strcmp(g->tab[i].nom, nom) != 0)
	{
		i++;
	}

	g->tab[i].type = NONE;
	g->tab[i].date.jour = 0;
	g->tab[i].date.mois = 0;
	g->tab[i].date.annee = 0;
	strcpy(g->tab[i].nom, init);
	strcpy(g->tab[i].way, init);
	g->modif = OUI;

	for(k = i ; k < g->nbObj ; k++)
	{
		g->tab[k].date.jour = g->tab[k + 1].date.jour;
		g->tab[k].date.mois = g->tab[k + 1].date.mois;
		g->tab[k].date.annee = g->tab[k + 1].date.annee;
		strcpy(g->tab[k].nom, g->tab[k + 1].nom);
		strcpy(g->tab[k].way, g->tab[k + 1].way);
		g->tab[k].type = g->tab[k + 1].type;

	}

	g->nbObj--;

}

/*Donne le nombre d'objets multimedia stockés*/
int nbObject(GestionnaireObjetMultimedia* g)
{
	return g->nbObj;
}

/*Donne le type d'un objet multimedia*/
TypeObjetMultimedia type(GestionnaireObjetMultimedia* g, int i)
{
	if(g->nbObj >= i)return g->tab[i].type;
	else
	{
		printf("Pas d'Objet multimedia à cette position");
		return NONE;
	}
}

/*Test si le gestionnaire est modifié (IHM)*/
Booleen estModifie(GestionnaireObjetMultimedia *g)
{
	if(g->modif == OUI)return VRAI;
	else return FAUX;
}

/*Change le nom de l'objet multimedia de rang i (IHM)*/
int changeNomObjetMultimedia(GestionnaireObjetMultimedia* g,int i, char * nom)
{
	if(g->nbObj >= i)
	{
		strcpy(g->tab[i].nom, nom);
		return 1;
	}
	else
	{
		printf("Pas d'Objet multimedia à cette position");
		return 0;
	}
}

/*Donne le nom de l'objet multimedia de rang i (IHM)*/
char * nom(GestionnaireObjetMultimedia* g, int i)
{
	if(g->nbObj >= i)
	{
		return g->tab[i].nom;
	}
	else
	{
		printf("Pas d'Objet multimedia à cette position");
		return "NULL";
	}
}

/*Indique si l'objet multimedia de rang i est une photo ou non (IHM)*/
Booleen estPhoto(GestionnaireObjetMultimedia* g, int i)
{
	if(g->nbObj >= i)
	{
		if(g->tab[i].type == PHOTO) return VRAI;
		else return FAUX;
	}
	else
	{
		printf("Pas d'Objet multimedia à cette position");
		return FAUX;
	}
}

/*Donne le chemin de l'objet multimedia de rang i  (IHM)*/
char * chemin(GestionnaireObjetMultimedia* g, int i)
{
	if(g->nbObj >= i)
	{
		return g->tab[i].way;
	}
	else
	{
		printf("Pas d'Objet multimedia à cette position");
		return "NULL";
	}
}
