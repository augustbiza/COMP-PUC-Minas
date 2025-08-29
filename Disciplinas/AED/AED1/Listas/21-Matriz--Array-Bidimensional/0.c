//Dados da questão
#include <stdio.h>
#include <stdlib.h>
const int NUM_LIN = 3; 
const int NUM_COL = 2; 

int main() { 
  
   float M1[NUM_LIN][ NUM_COL]; 
   leMatriz(M1); 
 
   float M2[NUM_LIN][ NUM_COL]; 
   leMatriz(M2); 
 
   if( iguais(M1, M2) ) printf("\nMatrizes iguais!\n"); 
   else printf("\nMatrizes diferentes!\n"); 
 
 return 0; 
}

/*
            codigos que se repetem muito

MATRIZ NORMAL
    for(int l = 0; l < NUM_LIN; l++) {
        for(int c = 0; c < NUM_COL; c++) {
            printf("%.1f ", M2[l][c]);
        }
        printf("\n");
    }

MATRIZ TRANSPOSTA: TROCA LIN <--> COL

    for(int l = 0; l < NUM_COL; l++) {
        for(int c = 0; c < NUM_LIN; c++) {
            printf("%.1f ", M2[l][c]);
        }
    printf("\n");
    }



*/