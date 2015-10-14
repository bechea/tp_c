#include <stdio.h>
#include <string.h>
#include "fichier.h"
#include "traitement.h"

int affichage(char *str);
int affichage2(char *str);

int main(){

  FILE * pFile=NULL;  /* Descripteur du fichier */

  pFile = ouvrirFichier("exemple.ged","r",ARRET);
  traiterLignesFichier(pFile, lireNom);
  fermerFichier(pFile);
  return 0;
}

int affichage(char *str)
{
	printf("%s",str);
	return 0;
}

int affichage2(char *str)
{
	static int cpt = 0;

	printf("%d [%d] %s\n",cpt, strlen(str), str);
	cpt++;
	return 0;
}
