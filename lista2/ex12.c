#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 2
#define COLUNAS 4
#define MAXRAND 30
#define MINRAND 0
#define VARIAVEL media

float calcmedia(int matriz[LINHAS][COLUNAS]);

int main() {

    srand(time(NULL));

    int matrizComum[LINHAS][COLUNAS], i, j;
    float VARIAVEL;

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
    VARIAVEL = calcmedia(matrizComum);

    //imprimindo o menor elemento
    printf("A media dos elementos da matriz eh [%f]", VARIAVEL);

    return 0;
}

float calcmedia(int matriz[LINHAS][COLUNAS]) {
    int i, j, soma = 0;
    float media;

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            soma+= matriz[i][j];
        }
    }

    media = soma / (LINHAS*COLUNAS);

    return media;
}