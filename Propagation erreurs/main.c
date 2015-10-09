#include <stdio.h>
#include <stdlib.h>
#include "suite.h"

int main()
{
	int n;
	char v[2];
	int verbose;

	printf("Rang de la suite ?");
	scanf("%d",&n);

	printf("Affichage de toutes les valeurs ? y/n\n");
	scanf("%s",&v[0]);
	if(v[0] == 'y')verbose = 1;
	else if(v[0] == 'n')verbose = 0;

	suite(n,verbose);

	return EXIT_SUCCESS;
}
