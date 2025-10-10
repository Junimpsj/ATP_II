#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    float preco;
    int estoque;
} Produto;

int main() {

    Produto *produto;

    strcpy(produto->nome, "Mouse Gamer");
    produto->preco = 150.00;
    produto->estoque = 50;

    printf("Dados do Produto:\n");
    printf("Nome: %s\n", produto->nome);
    printf("Preco: R$%.2f\n", produto->preco);
    printf("Estoque: %d unidades\n", produto->estoque);

    return 0;
}
