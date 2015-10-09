/*
 * ordonnancement.h
 *
 *  Created on: Oct 9, 2015
 *      Author: alexis
 */

#ifndef ORDONNANCEMENT_H_
#define ORDONNANCEMENT_H_

int lectureTaches(FILE * fl, Tache t[]);

void calcule(Tache t[], int dt[], int predMax[],int nb);

void afficheOrdonnancement(Tache t[], int dt[], int nb);

int mainOrdonnancement();

#endif /* ORDONNANCEMENT_H_ */
