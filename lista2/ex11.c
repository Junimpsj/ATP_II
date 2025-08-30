#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 3
#define MAXRAND 30
#define MINRAND 0

int contPares(int matriz[LINHAS][COLUNAS]);

int main() {

    srand(time(NULL));

    int matrizComum[LINHAS][COLUNAS], i, j, contador;

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
    contador = contPares(matrizComum);

    //imprimindo o menor elemento
    printf("A matriz tem [%d] elementos pares", contador);

    return 0;
}

int contPares(int matriz[LINHAS][COLUNAS]) {
    int i, j, contador = 0;

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            if(matriz[i][j] % 2 == 0) {
                contador++;
            }
        }
    }

    return contador;
}