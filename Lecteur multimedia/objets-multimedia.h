/*
 * objets-multimedia.h
 *
 *  Created on: Oct 21, 2015
 *      Author: alexis
 */

#ifndef OBJETS_MULTIMEDIA_H_
#define OBJETS_MULTIMEDIA_H_

#define NAME_MAX 50
#define DIRECTORY_MAX 100

typedef enum {FAUX,VRAI} Booleen;

typedef enum{PHOTO, VIDEO, NONE = 10} TypeObjetMultimedia;

typedef struct
{
	int jour;
	int mois;
	int annee;
}Date;

typedef struct
{
	TypeObjetMultimedia type;
	char nom[NAME_MAX];
	Date date;
	char way[DIRECTORY_MAX];


}ObjetMultimedia;


void remplirObjetMultimedia(ObjetMultimedia *ob, Date d, TypeObjetMultimedia t, char *nom, char *directory);

#endif /* OBJETS_MULTIMEDIA_H_ */
