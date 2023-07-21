#include <stdio.h>
#define N 3
#define M 3
int main(){

    int vetor[N][M]; 
    int i, j, contador = 1;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            vetor[i][j] = contador;
            contador++;
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf ("[%d] ", vetor[i][j]); 
        }
        printf ("\n");
    }
}