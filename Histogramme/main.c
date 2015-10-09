#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tableau.h"

/*Ce programme a pour but d'apprendre/comprendre 
 *la gestion des nombres aléatoires et des tableaux
 *de plus un histogramme est réalisé
 */
int main()
{
	int tab[DIM_TAB];
	int histo[VAL_MAX];
	int i;

	/*Init histogramme*/
	for(i = 0 ; i < VAL_MAX ; i++) histo[i] = 0;

	srand(time(NULL));/*Création de la seed*/

	init_alea_tab(tab);/*fonction d'init du tableau aléatoire*/
	histogramme(tab,histo);/*création de l'histogramme*/

	printf("Premier tableau :\n");
	affiche_tab(tab);
	affiche_histo(histo);

	return EXIT_SUCCESS;
}
