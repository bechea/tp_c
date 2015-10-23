/*
 * objets-multimedia.c
 *
 *  Created on: Oct 21, 2015
 *      Author: alexis
 */

#include <stdio.h>
#include <stdlib.h>
#include "objets-multimedia.h"

/*Rempli la structure d'un objet multimedia*/
void remplirObjetMultimedia(ObjetMultimedia *ob, Date d, TypeObjetMultimedia t, char *nom, char *directory)
{
	ob->type = t;
	ob->date = d;
	strcpy(ob->nom, nom);
	strcpy(ob->way, directory);

}
