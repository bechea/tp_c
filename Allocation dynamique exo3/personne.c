#include "personne.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void affiche_personne(Personne * p)
{
    printf("Personne : %s %s, %d ans\n",p->prenom, p->nom, p->age);
}


void init_personne( Personne *pers, char * p, char * n, int a)
{
    pers->age = a;
    strcpy(pers->prenom, p);
    strcpy(pers->nom, n);
}
