#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 4
#define COLUNAS 4
#define MAXRAND 20
#define MINRAND 0

int menorElemento(int matriz[LINHAS][COLUNAS]);

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
    verif = menorElemento(matrizComum);

    //imprimindo o menor elemento
    printf("O menor elemento da matriz eh: [%d]", verif);

    return 0;
}

int menorElemento(int matriz[LINHAS][COLUNAS]) {
    int i, j, maior;

    maior = matriz[0][0];

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            if(matriz[i][j] < maior) {
                maior = matriz[i][j];
            }
        }
    }

    return maior;
}