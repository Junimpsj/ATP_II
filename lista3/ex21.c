#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    int codigo;
    char categoria[MAX_CHAR];
} Produto;

void imprimirProduto(Produto *produto);

int main() {

    Produto *novoProduto;
    novoProduto = malloc(sizeof(Produto));

    printf("Insira os dados do Produto:\n");

    printf("Nome: ");
    scanf("%s", novoProduto->nome);

    printf("Codigo: ");
    scanf("%d", &novoProduto->codigo);

    printf("Categoria: ");
    scanf("%s", novoProduto->categoria);

    imprimirProduto(novoProduto);

    free(novoProduto);
    return 0;
}

void imprimirProduto(Produto *produto) {
    printf("\nProduto cadastrado com sucesso!\n");
    printf("Confira os dados: %s, Codigo %d, Categoria %s\n", produto->nome, produto->codigo, produto->categoria);
}
