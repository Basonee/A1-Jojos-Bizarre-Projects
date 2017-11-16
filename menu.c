#include <stdio.h>
#include <stdlib.h>


int choix;

int main(int argc, char const *argv[])
{
    printf("O------------------------------------------------------------------O\n");
    printf("|                   |MENU CARDIO-FREQUENCEMETRE|                   |\n");
    printf("|                              --------                            |\n");
    printf("|                                                                  |\n");
    printf("|Choix des options d'affichage :                                   |\n");
    printf("|                                                                  |\n");
    printf("|1. Afficher les donnees dans l'ordre du fichier .csv              |\n");
    printf("|2. Afficher les donnees en ordre croissant                        |\n");
    printf("|3. Afficher les données en ordre decroissant                      |\n");
    printf("|4. Afficher la moyenne de pouls dans une plage de temps donnee    |\n");
    printf("|5. Afficher le nombre de lignes de donnees actuellement en memoire|\n");
    printf("|6. Rechercher et afficher le minimum de pouls                     |\n");
    printf("|7. Rechercher et afficher le maximum de pouls                     |\n");
    printf("|8. Quitter l'application                                          |\n");
    printf("O------------------------------------------------------------------O\n");
   
  scanf("%d", &choix);
  printf("Vous avez choisi: %d\n", choix);
          
   if (choix == 1)
         {
           //csv();
      printf("");
         }
        
   if (choix == 2)
         {
         	
           //croissant();
         }
        
   if (choix == 3)
         {
           
         }
        
   if (choix == 4)
         {
           //decroissant();
         }
        
   if (choix == 5)
         {
           //ligneMemoire();
         }
        
   if (choix == 6)
         {
           //poulsMin();
         }
        
   if (choix == 7)
         {
           //poulsMax();
         }
        
  if (choix == 8)
         {
           //quit();
         } 
  if(choix>8||choix<1)
         {
            printf("Erreur\n"); 
            scanf("%d\n", &choix);
            printf("Vous avez choisi: %d\n", choix);
         }
  
  return 0;
}
