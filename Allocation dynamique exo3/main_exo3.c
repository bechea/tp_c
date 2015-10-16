#include <stdio.h>
#include <stdlib.h>
#include "personne.h"

int main()
{
    Personne p1;

    init_personne(&p1,"Lord", "Grantham", 55);
    affiche_personne(&p1);

    return 0;
}
