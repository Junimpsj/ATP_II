#include <stdio.h>
#include <stdlib.h>

#define LINHAS 4
#define COLUNAS 4

void lerMatrizInsert(int matriz[LINHAS][COLUNAS]);

void imprimirMatriz(int matriz[LINHAS][COLUNAS]);

int buscaBinariaMatriz(int matriz[LINHAS][COLUNAS], int valor);

int main() {

    int matriz[LINHAS][COLUNAS];
    int valor, resultado;

    lerMatrizInsert(matriz);

    printf("Matriz:\n");
    imprimirMatriz(matriz);

    printf("Digite o valor para buscar: ");
    scanf("%d", &valor);

    resultado = buscaBinariaMatriz(matriz, valor);

    if (resultado)
        printf("Valor %d encontrado na matriz!\n", valor);
    else
        printf("Valor %d NAO encontrado na matriz.\n", valor);

    return 0;
}

void lerMatrizInsert(int matriz[LINHAS][COLUNAS]) {

    int i, j;

    printf("=== Insira os elementos da Matriz ORDENADA ===\n");
    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {

    int i, j;

    for(i = 0 ; i < LINHAS ; i++) {
        for(j = 0 ; j < COLUNAS ; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

}

int buscaBinariaMatriz(int matriz[LINHAS][COLUNAS], int valor) {

    int inicio = 0, fim = LINHAS * COLUNAS - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        int i = meio / COLUNAS;
        int j = meio % COLUNAS;
        if (matriz[i][j] == valor)
            return 1;
        else if (matriz[i][j] < valor)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }

    return 0;

}