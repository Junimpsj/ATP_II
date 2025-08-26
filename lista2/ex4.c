#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 3
#define MAXRAND 15
#define MINRAND 0

void mult_matrizes(int a[LINHAS][COLUNAS], int b[LINHAS][COLUNAS], int result[LINHAS][COLUNAS]);

int main() {

    srand(time(NULL));

    int matriz1[LINHAS][COLUNAS], matriz2[LINHAS][COLUNAS], matrizResultado[LINHAS][COLUNAS], i, j;

    //preenchendo a matriz 1
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            matriz1[i][j] = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
        }
    }

    //preenchendo a matriz 2
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            matriz2[i][j] = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
        }
    }

    //imprimindo a matriz 1
    printf("A matriz 1:\n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //imprimindo a matriz 2
    printf("A matriz 2:\n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d ", matriz2[i][j]);
        }
        printf("\n");
    }

    //passando pela função
    mult_matrizes(matriz1, matriz2, matrizResultado);

    printf("\n");

    //printando a matrizResultado
    printf("A matriz resultado:\n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d ", matrizResultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void mult_matrizes(int a[LINHAS][COLUNAS], int b[LINHAS][COLUNAS], int result[LINHAS][COLUNAS]) {
    int i, j, k;

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++){
            result[i][j] = 0;
            for(k = 0 ; k < COLUNAS ; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}