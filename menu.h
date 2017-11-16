#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 

  int *croissant(int* tableau)
{


    int passage = 0;
    bool permutation = true;
    int cas = 0;
   
    while (permutation) {
        permutation = false;
        passage ++; 
        for (cas=0;tableau[cas +1] != NULL;cas++) {
            if (tableau[cas]>tableau[cas+1]){
                permutation = true;
                int temp = tableau[cas];
                tableau[cas] = tableau[cas+1];
                tableau[cas+1] = temp;
                
            }
    
        }
       
    }
    return (tableau);
}

int main(int argc, char *argv[]) {
	int print = 0;
  int cas = 9;
  int tableau[cas];
  tableau[0] = 97;
  tableau[1] = 42;
  tableau[2] = 89;
  tableau[3] = 21;
  tableau[4] = 14;
  tableau[5] = 36;
  tableau[6] = 58;
  tableau[7] = 65;
  tableau[8] = 73;
  
	int *result = croissant(tableau);
	for (print = 0; print<cas;print++) {
	
		printf("%d\n", result[print]);
}
return 0;
}

