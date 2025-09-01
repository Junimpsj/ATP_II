#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define LINHAS 3
#define COLUNAS 3

void preencherMatrizRandom(int matriz[LINHAS][COLUNAS]);

void lerMatrizInsert(int matriz[LINHAS][COLUNAS]);

void imprimirMatriz(int matriz[LINHAS][COLUNAS]);

int determinante3x3(int matriz[LINHAS][COLUNAS]);

int ehVandermonde(int matriz[LINHAS][COLUNAS]);

int main() {

    int matrizComum[LINHAS][COLUNAS];

    lerMatrizInsert(matrizComum);

    printf("A Matriz eh:\n");
    imprimirMatriz(matrizComum);

    if(ehVandermonde(matrizComum))
        printf("A matriz eh uma matriz de Vandermonde!\n");
    else
        printf("A matriz NAO eh uma matriz de Vandermonde!\n");

    return 0;

}

void lerMatrizInsert(int matriz[LINHAS][COLUNAS]) {

    int i, j;

    printf("=== Insira os elementos da Matriz ORDENADA ===\n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {

    int i, j;

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

}

int ehVandermonde(int matriz[LINHAS][COLUNAS]) {

    for(int i = 0; i < LINHAS; i++) {
        int base = matriz[i][1];
        //verifica se a primeira coluna é 1
        if(matriz[i][0] != 1)
            return 0;
        //verifica se a terceira coluna é o quadrado da segunda
        if(matriz[i][2] != base * base)
            return 0;
    }

    return 1;

}