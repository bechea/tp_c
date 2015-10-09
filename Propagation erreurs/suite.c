#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double suite(int n, int verbose)
{
	int i;
	double nbr = M_E - 1;

	for(i = 1 ; i <= n ; i++)
	{
		nbr = M_E - i*nbr;
		if(verbose == 1)printf("rang : %d\t%lf\n",i,nbr);
	}

	return nbr;
}
