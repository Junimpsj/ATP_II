#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 4
#define COLUNAS 4
#define MAXRAND 15
#define MINRAND 0

int main() {

    srand(time(NULL));

    int matriz[LINHAS][COLUNAS], i, j, soma = 0;

    //preenchendo a matriz
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            matriz[i][j] = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
        }
    }

    //imprimindo a matriz
    printf("A matriz:\n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    //realizando a soma dos elementos da matriz
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            soma+= matriz[i][j];
        }
    }

    //printando o resultado
    printf("\nA soma dos elementos dessa matriz eh: %d", soma);

    return 0;
}   