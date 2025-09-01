#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 2
#define COLUNAS 2
#define MAXRAND 5
#define MINRAND 0

void preencherMatrizRandom(int matriz[LINHAS][COLUNAS]);

void lerMatrizInsert(int matriz[LINHAS][COLUNAS]);

void imprimirMatriz(int matriz[LINHAS][COLUNAS]);

int ehToeplitz(int matriz[LINHAS][COLUNAS]);

int main() {
    int matrizComum[LINHAS][COLUNAS];

    lerMatrizInsert(matrizComum);

    printf("A Matriz eh:\n");
    imprimirMatriz(matrizComum);

    if(ehToeplitz(matrizComum))
        printf("A matriz eh uma matriz de Toeplitz!\n");
    else
        printf("A matriz NAO eh uma matriz de Toeplitz!\n");

    return 0;
}

void preencherMatrizRandom(int matriz[LINHAS][COLUNAS]) {

    srand(time(NULL));

    int i, j;

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            matriz[i][j] = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
        }
    }

}

void lerMatrizInsert(int matriz[LINHAS][COLUNAS]) {

    int i, j;

    printf("=== Insira os elementos da Matriz ===\n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("Insira o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    
    int i, j;
    
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }

}

int ehToeplitz(int matriz[LINHAS][COLUNAS]) {

    if(matriz[0][0] == matriz[1][1] && matriz[0][1] == matriz[1][0])
        return 1;
    else
        return 0;

}