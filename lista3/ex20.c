#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    float preco;
    int quantidade;
} Produto;

int main() {

    Produto *novoProduto;
    novoProduto = malloc(sizeof(Produto));

    strcpy(novoProduto->nome, "Notebook");
    novoProduto->preco = 3500.00;
    novoProduto->quantidade = 10;

    printf("Informacoes do Produto:\n");
    printf("Nome: %s\n", novoProduto->nome);
    printf("Preco: R$%.2f\n", novoProduto->preco);
    printf("Quantidade: %d\n", novoProduto->quantidade);

    free(novoProduto);
    return 0;
}
