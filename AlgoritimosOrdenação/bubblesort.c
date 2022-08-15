#include <stdio.h>
#include <stdlib.h>



int main (void){
    int A[20];
    int i, aux, flag =1; 
    int seed = 100;
    srand(seed);

    //Recebendo valores aléatorios
    for (i = 0; i<10; i++){
        A[i] = rand()%101;
    }

    for (i = 0; i<10; i++){
        printf("%d " , A[i]);
    }  
    printf("\n");

    while(flag != 0){
        flag = 0;
    for (i =0; i<9; i++){
        if (A[i]> A[i+1]){
            //Troca valores
            aux    = A[i];
            A[i]   = A[i+1];
            A[i+1] = aux;
            flag++;
        }
      }
    }

    for (i = 0; i<10; i++){
        printf("%d " , A[i]);
    }  

  return 0;
}