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
int ehHankel(int matriz[LINHAS][COLUNAS]);

int main() {

    int matrizComum[LINHAS][COLUNAS];

    //eu fiz com preenchimento randomico mas vai ser um em um milhao pra achar uma matriz que seja de hankell assim
    //mas agora o cérebro já ta derretendo
    preencherMatrizRandom(matrizComum);

    printf("A Matriz eh:\n");
    imprimirMatriz(matrizComum);

    if(ehHankel(matrizComum))
        printf("A matriz eh uma matriz de Hankel!\n");
    else
        printf("A matriz NAO eh uma matriz de Hankel!\n");

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

int ehHankel(int matriz[LINHAS][COLUNAS]) {

    //pra cada anti-diagonal verifica se todos os elementos são iguais
    for(int soma = 0; soma <= LINHAS + COLUNAS - 2; soma++) {
        int valor = -1;
        for(int i = 0; i < LINHAS; i++) {
            int j = soma - i;
            if(j >= 0 && j < COLUNAS) {
                if(valor == -1)
                    valor = matriz[i][j];
                else if(matriz[i][j] != valor)
                    return 0;
            }
        }
    }

    return 1;

}