#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 

  void tri_bulle(int* tableau)
{


    int passage = 0;
    bool permutation = true;
    int cas = 0;
   
    while (permutation) {
        permutation = false;
        passage ++; 
        for (cas=0;cas<20-passage;cas++) {
            if (tableau[cas]>tableau[cas+1]){
                permutation = true;
                int temp = tableau[cas];
                tableau[cas] = tableau[cas+1];
                tableau[cas] = temp;
                printf("test");     
            }
          
        }
       
    }

}

int main(int argc, char *argv[]) {

  int cas = 0;
  int* tableau[cas];
  *tableau[0] = 97;
  *tableau[1] = 42;
  *tableau[2] = 89;
  *tableau[3] = 21;
  *tableau[4] = 14;
  *tableau[5] = 36;
  *tableau[6] = 58;
  *tableau[7] = 65;
  *tableau[8] = 73;

 
return 0;
}

