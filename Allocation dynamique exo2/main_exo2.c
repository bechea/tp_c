#include <stdio.h>
#include <stdlib.h>
#include "personne.h"

int main()
{
    Personne *p1 = allouer_personne("Lord", "Grantham", 55);
    Personne *p2 = allouer_personne("Lady", "Grantham", 54);
    affiche_personne(p1);
    affiche_personne(p2);

    free(p1);
    free(p2);
    return 0;
}
