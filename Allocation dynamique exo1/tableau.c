#include <stdio.h>
#include <stdlib.h>
#include "tableau.h"

/*Initialisation du tableau aléatoire*/
void init_alea_tab(int *tab)
{
	int i;

	for(i = 0 ; i < DIM_TAB ; i++)
	{
		tab[i] = rand()%VAL_MAX;
	}
}

/*Affichage du tableau aléatoire*/
void affiche_tab(int *tab)
{
	int i;

	printf("Affichage du tableau d'entiers : \n");
	for(i = 0 ; i < DIM_TAB ; i++)
	{
		printf("%d ",tab[i]);
	}
}

/*Création de l'histogramme*/
void histogramme(int *tab, int *histo)
{
	int i;
	int n;

	for(i = 0 ; i < DIM_TAB ; i++)
	{
		n = tab[i];
		histo[n]++;
	}
}

/*Affichage de l'histogramme*/
void affiche_histo(int *histo)
{
	int i;
	int j;

	printf("\nAffichage de l'histogramme :");
	for(i = 0 ; i < VAL_MAX ; i++)
	{
		if(histo[i] != 0)
		{
			printf("\n%d :\t",i);
			for(j = 1 ; j <= histo[i] ; j++)
			{
				printf("-");
			}/*affichage de - pour chaque apparition du nombre*/
		}/*condition si cette case apparaît au moins une fois*/
	}/*Boucle des cases*/
}

float tab_moyen(float *tab, int taille)
{
	float moy = 0;
	int i;

	for(i = 0 ; i < taille ; i++)
	{
		moy += tab[i];
	}
	moy = moy/taille;

	return moy;
}

int intervalle(float *tab, float moy, int taille)
{
	int i;
	int inter = 0;

	for(i = 0 ; i < taille ; i++)
	{
		if((tab[i] >= moy - 2) && (tab[i] <= moy + 2))
		{
			inter++;
		}
	}

	return inter;
}
