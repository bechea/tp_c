#include "personne.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Personne * allouer_personne( char * p, char * n, int a)
{
    Personne *pers;

    pers = malloc(sizeof(Personne));
    pers->age = a;
    strcpy(pers->prenom, p);
    strcpy(pers->nom, n);

    affiche_personne(pers);

    return pers;
}


void affiche_personne(Personne * p)
{
    printf("Personne : %s %s, %d ans\n",p->prenom, p->nom, p->age);
}


void init_personne( Personne* pers, char * p, char * n, int a)
{
    pers->age = a;
    strcpy(pers->prenom, p);
    strcpy(pers->nom, n);
}
