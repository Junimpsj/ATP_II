#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 4
#define COLUNAS 4
#define MAXRAND 15
#define MINRAND 0

int ehDiagonal(int matriz[LINHAS][COLUNAS]);

int main() {

    int matriz[LINHAS][COLUNAS], i, j;

    srand(time(NULL));

    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
        }
    }

    printf("Matriz 4x4:\n");
    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }


    if(ehDiagonal(matriz)) {
        printf("A matriz eh diagonal.\n");
    } else {
        printf("A matriz NAO eh diagonal.\n");
    }

    return 0;
}

int ehDiagonal(int matriz[LINHAS][COLUNAS]) {

    int i, j;

    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            if(i != j && matriz[i][j] != 0) {
                return 0;
            }
        }
    }

    return 1;
}