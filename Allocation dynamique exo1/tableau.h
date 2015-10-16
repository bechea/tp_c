#ifndef TABLEAU_H_
#define TABLEAU_H_

#define DIM_TAB 5
#define VAL_MAX 20

void init_alea_tab(int *tab);
void affiche_tab(int *tab);
void histogramme(int *tab, int *histo);
void affiche_histo(int *histo);
float tab_moyen(float *tab, int taille);
int intervalle(float *tab, float moy, int taille);

#endif
