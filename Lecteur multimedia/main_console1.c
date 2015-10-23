#include <stdio.h>
#include <stdlib.h>
#include "gestionnaire-objets-multi.h"

int main(void)
{
    int i;
    GestionnaireObjetMultimedia player;
    char cmd[512];

    initGestionnaire(&player);

    ajoutObjetMultimedia(&player,"WEI","data/fish.jpg",10,10,2014,PHOTO);
    ajoutObjetMultimedia(&player,"WEI2","data/fishAndTree.jpg",11,10,2014,PHOTO);
    ajoutObjetMultimedia(&player,"Video","data/Sample_512kb.mp4",10,10,2015,VIDEO);


    suppressionObjetMultimedia(&player,"WEI2");


    for(i = 0; i<nbObject(&player) ; ++i)
        switch(type(&player,i))
        {
            case PHOTO :
            {
                sprintf(cmd,"eog %s",chemin(&player,i));

                printf("Visualisation de la photo %s : \n %s \n", nom(&player,i),cmd);
                system(cmd);
                    break;
            }
            case VIDEO :
            {
                sprintf(cmd,"vlc %s",chemin(&player,i));

                printf("Visualisation de la video %s : \n %s \n", nom(&player,i),cmd);
                system(cmd);
                    break;
            }
            default :
                    printf("Objet inconnu\n");
        }

    freeGestionnaire(&player);

    return 0;
}

