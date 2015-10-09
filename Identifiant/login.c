#include <stdio.h>
#include <stdlib.h>
#include "login.h"
#include "ctype.h"

/*fonction de création de l'id
 *id prend la première lettre du prenom
 *et le reste du nom défini par un nombre
 *de lettre max MAX_ID
 *le tout en minuscule
 */
void identifiant(char *nom, char *prenom, char *id)
{
	int i;

	id[0] = tolower(prenom[0]); /*si majuscule--> minuscule*/

	for(i = 1 ; i < MAX_ID - 1 ; i++)
	{
		id[i] = tolower(nom[i - 1]);
	}

	id[MAX_ID - 1] = '\0';/*fin de tableau pour le définir en chaîne de caractère*/
}
