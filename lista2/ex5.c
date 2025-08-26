#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 2
#define MAXRAND 15
#define MINRAND 0

void transposta(int a[LINHAS][COLUNAS], int b[COLUNAS][LINHAS]);

int main() {

    srand(time(NULL));

    int matrizSimples[LINHAS][COLUNAS], matrizTransposta[COLUNAS][LINHAS], i, j;

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
    transposta(matrizSimples, matrizTransposta);

    printf("\n");

    //printando a matriz Transposta
    printf("A matriz transposta:\n");
    for(i = 0 ; i < COLUNAS ; i++) {
        for(j = 0 ; j < LINHAS ; j++) {
            printf("%3d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void transposta(int a[LINHAS][COLUNAS], int b[COLUNAS][LINHAS]) {
    int i, j;

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++){
            b[j][i] = a[i][j];
        }
    }
}