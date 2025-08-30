#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 3
#define MAXRAND 20
#define MINRAND 0

int maiorElemento(int matriz[LINHAS][COLUNAS]);

int main() {

    srand(time(NULL));

    int matrizComum[LINHAS][COLUNAS], i, j, verif;

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
    verif = maiorElemento(matrizComum);

    //imprimindo o menor elemento
    printf("O maior elemento da matriz eh: [%d]", verif);

    return 0;
}

int maiorElemento(int matriz[LINHAS][COLUNAS]) {
    int i, j, maior;

    maior = matriz[0][0];

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    return maior;
}