#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 3
#define MAXRAND 5
#define MINRAND 0

void preencherMatrizRandom(int matriz[LINHAS][COLUNAS]);

void lerMatrizInsert(int matriz[LINHAS][COLUNAS]);

void imprimirMatriz(int matriz[LINHAS][COLUNAS]);



int main() {
    
    int matrizComum[LINHAS][COLUNAS], matriz2[LINHAS][COLUNAS]; 

    preencherMatrizRandom(matrizComum);
    preencherMatrizRandom(matriz2);

    printf("A Matriz 1 eh:\n");
    imprimirMatriz(matrizComum);

    printf("A matriz 2 eh:\n");
    imprimirMatriz(matriz2);

    

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

    printf("=== Insira os elementos da Matriz ===");
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

