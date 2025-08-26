#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 5
#define COLUNAS 5
#define MAXRAND 15
#define MINRAND 0

int diagonal_principal(int a[LINHAS][COLUNAS]);

int main() {

    srand(time(NULL));

    int matrizSimples[LINHAS][COLUNAS], i, j, somaDiagonal;

    //preenchendo a matriz Simples
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            matrizSimples[i][j] = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
        }
    }

    //imprimindo a matriz Simples
    printf("A matriz comum:\n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d ", matrizSimples[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //passando pela função
    somaDiagonal = diagonal_principal(matrizSimples);

    printf("\n");

    //printando o resultado da diagonal principal
    printf("A diagonal principal eh: %d", somaDiagonal);

    return 0;
}

int diagonal_principal(int a[LINHAS][COLUNAS]) {
    int i, j, somaDiagonal = 0;

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++){
            if(i == j) {
                somaDiagonal += a[i][j];
            }
        }
    }

    return somaDiagonal;
}