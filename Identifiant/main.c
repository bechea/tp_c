#include <stdio.h>
#include <stdlib.h>
#include "login.h"

#define TAILLE_MAX 20

/*Ce programme affiche un id en fonction du prenom
 *et du nom de la personne
 */
int main()
{
	char prenom[TAILLE_MAX];
	char nom[TAILLE_MAX];
	char id[MAX_ID];

	printf("Entrez votre prenom\n");
	scanf("%s",prenom);

	printf("Entrez votre nom\n");
	scanf("%s",nom);

	printf("Tu es donc %s %s\n",prenom,nom);

	identifiant(nom, prenom, id);/*création de l'id*/
	printf("Ton identifiant est : %s\n",id);
	return EXIT_SUCCESS;
}
