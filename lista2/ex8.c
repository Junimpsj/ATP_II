#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 4
#define COLUNAS 4
#define MAXRAND 20
#define MINRAND 0

void rotacaoHoraria(int matriz[LINHAS][COLUNAS],int matrizRotacionada[LINHAS][COLUNAS]);

int main() {

    srand(time(NULL));

    int matrizComum[LINHAS][COLUNAS], matrizRotacionada[LINHAS][COLUNAS], i, j, verif;

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
    rotacaoHoraria(matrizComum, matrizRotacionada);

    //imprimindo a matriz rotacionada
    printf("MATRIZ ROTACIONADA 90 graus horario: \n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d ", matrizRotacionada[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void rotacaoHoraria(int matrizComum[LINHAS][COLUNAS], int matrizRotacionada[LINHAS][COLUNAS]) {
    int i, j;

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            matrizRotacionada[j][LINHAS - 1 - i] = matrizComum[i][j];
        }
    }
}