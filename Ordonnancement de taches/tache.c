/*!
 * \file Tache.c
 * \brief definitions des types et des prototypes des fonctions associees a une Tache
 *
 */


#include "tache.h"
#include "stdio.h"

/*!
* \fn  void saisieTache(Tache * t)
*     saisie d'un objet tache par des donnes lues sur l'entree standard
* \param[out] t tache saisie
*/

void  saisieTache( Tache * t)
{
	int i;

	printf("Ecrit les informations de la tache\n");

	printf("tache : \n");
	scanf("%d",&t->no);

	printf("duree : \n");
	scanf("%d",&t->duree);

	printf("Nombre de predecesseur : \n");
	scanf("%d",&t->nbPred);

	printf("Predecesseur : \n");
	for(i = 0 ; i < t->nbPred ; i++)
	{
		scanf("%d",&t->pred[i]);
	}
	printf("titre : \n");
	scanf("%s",t->titre);
}

/*!
* \fn void afficheTache(Tache t)
* affiche une tache sous la forme :
* nom - le titre - la duree - (pred1, pred2,   )
*  \param[in] t la tache a afficher
*/

void afficheTache(Tache *t)
{
	printf("Voici une tache : \n");
	printf("Nom : %d\n",t->no);
	printf("Duree : %d\n",t->duree);
	printf("Predecesseur : %d\n",t->nbPred);
	printf("Titre : %s",t->titre);
}

int mainTache(){

	FILE *ptr_f = NULL;
	Tache t;

	ptr_f = fopen("test.txt","w");

	saisieTache(&t);
	ecrireTache(ptr_f,&t);
	/*lireTache(ptr_f, &t);
	afficheTache(&t);*/

	fclose(ptr_f);
    return 1;
}

void lireTache(FILE *f, Tache *t)
{
	int i;

	fscanf(f,"%d",&t->no);
	fscanf(f,"%d",&t->duree);
	fscanf(f,"%d",&t->nbPred);
	for(i = 0 ; i <= t->nbPred ; i++)
	{
		fscanf(f,"%d",&t->pred[i]);
	}
	fgets(t->titre,LGMAX,f);
}


void ecrireTache(FILE *f, Tache *m)
{

	int i;

	fprintf(f,"tache %d - ",m->no);
	fprintf(f,"duree %d - ",m->duree);
	fprintf(f,"pred : ");
	for(i = 0 ; i <= m->nbPred ; i++)
	{
		fprintf(f,"%d ",m->pred[i]);
	}
	fprintf(f,"- ");
	fprintf(f,"%s",m->titre);
}
