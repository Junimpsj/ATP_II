#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 4
#define MAXRAND 30
#define MINRAND 0

void copiaElementos(int matriz1[LINHAS][COLUNAS], int matriz2[LINHAS][COLUNAS]);

int main() {

    srand(time(NULL));

    int matrizComum[LINHAS][COLUNAS], matriz2[LINHAS][COLUNAS], i, j;

    //preenchendo
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            matrizComum[i][j] = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
        }
    }

    //imprimindo a matriz
    printf("MATRIZ COMUM: \n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d ", matrizComum[i][j]);
        }
        printf("\n");
    }

    //passando pela função para rotacionar
    copiaElementos(matrizComum, matriz2);

    //imprimindo a matriz copiada
    printf("MATRIZ COPIADA: \n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void copiaElementos(int matriz1[LINHAS][COLUNAS], int matriz2[LINHAS][COLUNAS]) {
    int i, j;

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            matriz2[i][j] = matriz1[i][j];
        }
    }
}