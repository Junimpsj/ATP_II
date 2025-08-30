#include <stdio.h>
#include <stdlib.h>

#define LINHAS 3
#define COLUNAS 3

void simetrica(int matriz[LINHAS][COLUNAS]);

int main() {

    int matriz[LINHAS][COLUNAS], i, j, verif;

    //recebendo a matriz
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("Insira o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    //imprimindo a matriz
    printf("MATRIZ: \n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    //passando pela função para verificar se é simétrica
    simetrica(matriz);

    return 0;
}

void simetrica(int matriz[LINHAS][COLUNAS]) {
    int i, j, simetria = 1;

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetria = 0;
                break;
            }
        }
        if(!simetria) {break;}
    }

    if(simetria){
        printf("A matriz eh simetrica!");
    } else {
        printf("Nao eh simetrica!");
    }
}