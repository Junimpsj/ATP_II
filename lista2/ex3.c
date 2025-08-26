#include <stdio.h>
#include <stdlib.h>

#define LINHAS 2
#define COLUNAS 2

int main() {

    int matriz1[LINHAS][COLUNAS], matriz2[LINHAS][COLUNAS], i, j, iguais;

    //preenchendo a matriz 1
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("Insira o elemento [%d][%d] da Matriz 1: ", i+1, j+1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\n");

     //preenchendo a matriz 2
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("Insira o elemento [%d][%d] da Matriz 2: ", i+1, j+1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    //imprimindo a matriz 1 e 2
    printf("A matriz 1:\n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("A matriz 2:\n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //verificando se são iguais
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            if(matriz1[i][j] != matriz2[i][j]) {
                iguais = 0;
                break;
        }
    }
    if(!iguais) break;
    }

    if(iguais) {
        printf("Sao iguais!");
    } else {
        printf("Sao diferentes!");
    }

    return 0;
}