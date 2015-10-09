/*!
 * \file tache.h
 * \brief Module de definition des taches
 *
 * \author  ...
 * \date ...
 *
 */

#ifndef TACHE_H
#define TACHE_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LGMAX 64 /* longueur maximum du titre*/
#define NMAXPRED 5  /* nombre maximum de predecesseur*/

/*!
 * \struct Tache
 * Type representant une tache
 */
typedef struct{
  int no; /*le nom de la tache*/
  int duree; /* la duree de la tache*/
  int nbPred;     /* le nombre effectif de predecesseur de la tache*/
  int pred[NMAXPRED];  /*le tableau des predecesseurs*/
  char titre[LGMAX];   /*le titre de la tache*/
}Tache ;


void lireTache(FILE *f, Tache *t);
void ecrireTache(FILE *f, Tache *m);
#endif
