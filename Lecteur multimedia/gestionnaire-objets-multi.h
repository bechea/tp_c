#ifndef GESTIONNAIRE_H
#define GESTIONNAIRE_H

#include "objets-multimedia.h"

#define OBJET_MAX 512

typedef enum {OUI, NON, None}Modification;

typedef struct
{
	ObjetMultimedia tab[OBJET_MAX];
	int nbObj;
	Modification modif;

}GestionnaireObjetMultimedia;

/*Initialise un Gestionnaire vide (IHM)*/
void initGestionnaire(GestionnaireObjetMultimedia* g);	

/*Vide un gestionnaire (IHM)*/
void freeGestionnaire(GestionnaireObjetMultimedia* g);		

/*Ajout un objet multimedia dans le gestionnaire*/
void ajoutObjetMultimedia(GestionnaireObjetMultimedia* g,char * nom, char * chemin, int jour, int mois, int annee, TypeObjetMultimedia type);

/*Supprime un objet multimedia du gestionnaire*/
void suppressionObjetMultimedia(GestionnaireObjetMultimedia* g, char * nom);	

/*Test si le gestionnaire est modifié (IHM)*/
Booleen estModifie(GestionnaireObjetMultimedia *g);

/*Change le nom de l'objet multimedia de rang i (IHM)*/
int changeNomObjetMultimedia(GestionnaireObjetMultimedia* g,int i, char * nom);

/*Donne le nom de l'objet multimedia de rang i (IHM)*/
char * nom(GestionnaireObjetMultimedia* g, int i);

/*Indique si l'objet multimedia de rang i est une photo ou non (IHM)*/
Booleen estPhoto(GestionnaireObjetMultimedia* g, int i);

/*Donne le chemin de l'objet multimedia de rang i  (IHM)*/
char * chemin(GestionnaireObjetMultimedia* g, int i);	

/*Donne le nombre d'objets multimedia stockés*/
int nbObject(GestionnaireObjetMultimedia* g);

/*Donne le type d'un objet multimedia*/
TypeObjetMultimedia type(GestionnaireObjetMultimedia* g, int i);


#endif /* MULTIMEDIAOBJECTS_H*/
