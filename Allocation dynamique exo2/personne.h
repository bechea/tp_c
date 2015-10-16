#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED

#define TAILLE_MAX 64

typedef struct{
    char prenom [TAILLE_MAX];
    char nom[TAILLE_MAX];
    int age;
}Personne;


Personne * allouer_personne( char * p, char * n, int a);

void affiche_personne(Personne * p);

void init_personne( Personne* pers, char * p, char * n, int a);
#endif
