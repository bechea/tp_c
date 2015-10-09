/*!
 * \file ordonnancement.c
 * \brief definition du module Ordonnancement
 * \author ...
 * \date ...
 */
#include "tache.h"
#include "ordonnancement.h"

/*!
 * \fn int lectureTaches(FILE * fl, Tache t[])
 * stocke dans un tableau de t�ches les taches
 * \param[in] fl le fichier contenant les taches
 * \param[out] Tache t[] le tableau des t�ches
 * \return int le nombre effectif de t�ches dans le fichier
 */

int lectureTaches(FILE * fl, Tache t[])
{

	return 1;
}

/*!
 * \fn void calcule(Tache t[], int dt[], int nb)
 * calcule la date au plus tot de chaque tache
 * dt[0] = 0; tache debut
 * \param[in] Tache t[] le tableau des t�ches
 * \param[in,out] int dt[] le tableau des durees a remplir par la fonction
 * \param[in] nb le nombre effectif de t�ches dans le fichier
 */

void calcule(Tache t[], int dt[], int predMax[],int nb)
{
   /* a completer */
}

/*!
 * \fn void afficheOrdonnancement(Tache t[], int dt[], int nb)
 * affiche le resultat
 * \param[in] Tache t[] le tableau des taches
 * \param[in,out] int dt[] le tableau des durees
 * \param[in] nb le nombre effectif de taches dans le fichier
 */

void afficheOrdonnancement(Tache t[], int dt[], int nb)
{
    /* a completer */
}

/*************************************/
/* Test du module ordonnancement     */
/*************************************/

int mainOrdonnancement()
{
   /* a completer */
    return 1;
}

