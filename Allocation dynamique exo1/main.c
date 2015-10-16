/*
 * main.c
 *
 *  Created on: Oct 16, 2015
 *      Author: alexis
 */


#include <stdio.h>
#include <stdlib.h>
#include "tableau.h"

int main()
{
	float tab_ini[10] = {0, 5.5, 6, 8, 9.25, 6.5, 5.75, 3, 6.25, 6};
	int taille = 10;
	float *tab_fin = NULL;
	int inter;
	float moy;
	int i;
	int j = 0;

	moy = tab_moyen(tab_ini, taille);
	inter = intervalle(tab_ini, moy, taille);

	tab_fin = malloc(inter * sizeof(float));

	for(i = 0 ; i < taille ; i++)
	{
		if((tab_ini[i] >= moy - 2) && (tab_ini[i] <= moy + 2))
		{
			tab_fin[j] = tab_ini[i];
			printf("%f\n",tab_fin[j]);
			j++;
		}
	}
	printf("Moyenne du tableau intervalle : %f\n",tab_moyen(tab_fin,inter));

	free(tab_fin);
	return 1;
}
