#include <stdio.h>
#include <stdlib.h>
#include "menu.c"




void csv(){

  FILE* fichier = NULL; 
  fichier = fopen("battements.csv","r");

    if (fichier != NULL)
    {
        //lire ou écrire
      
      fclose(fichier);
    }
    else
    {
        printf("Impossible d'ouvrir le fichier");
    }
}


void croissant (){

  
}
void decroissant (){

  
}

void ligneMemoire(){


}

void poulsMin(){

  
}

void poulsMax(){

  
}

void quit(){


}
