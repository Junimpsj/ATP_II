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

void transposta(int matriz[LINHAS][COLUNAS], int matrizT[LINHAS][COLUNAS]);

int saoOrtogonais(int matriz1[LINHAS][COLUNAS], int matriz2[LINHAS][COLUNAS]);

int main() {
    
    int matriz1[LINHAS][COLUNAS], matriz2[LINHAS][COLUNAS], matriz2T[LINHAS][COLUNAS];
    int flag;

    lerMatrizInsert(matriz1);
    lerMatrizInsert(matriz2);

    printf("Matriz 1:\n");
    imprimirMatriz(matriz1);

    printf("Matriz 2:\n");
    imprimirMatriz(matriz2);

    transposta(matriz2, matriz2T);

    flag = saoOrtogonais(matriz1, matriz2T);

    if(!flag) {
        printf("As matrizes nao sao ortogonais!");
    } else {
        printf("As matrizes sao ortogonais!");
    }

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

void transposta(int matriz[LINHAS][COLUNAS], int matrizT[LINHAS][COLUNAS]) {

    int i, j;

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            matrizT[j][i] = matriz[i][j];
        }
    }

}

int saoOrtogonais(int matriz1[LINHAS][COLUNAS], int matriz2[LINHAS][COLUNAS]) {

    int i, j, k, matrizResultado[LINHAS][COLUNAS];

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            matrizResultado[i][j] = 0;
            for(k = 0 ; k < COLUNAS ; k++) {
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("Matriz resultado do produto:\n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d ", matrizResultado[i][j]);
        }
        printf("\n");
    }

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            if(i == j) {
                if(matrizResultado[i][j] != 1 && matrizResultado[i][j] != -1)
                    return 0;
            } else {
                if(matrizResultado[i][j] != 0)
                    return 0;
            }
        }
    }
    return 1;
}