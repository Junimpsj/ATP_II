#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    int codigo;
    float preco;
} Produto;

int main() {

    Produto *novoProduto;
    novoProduto = malloc(sizeof(Produto)*5);

    //Produtos cadastrados:

    strcpy((novoProduto+0)->nome+0, "Processador");
    (novoProduto+0)->codigo = 123;
    (novoProduto+0)->preco = 800;

    strcpy((novoProduto+1)->nome+0, "Placa-mae");
    (novoProduto+1)->codigo = 234;
    (novoProduto+1)->preco = 300;

    strcpy((novoProduto+2)->nome+0, "Memoria-RAM");
    (novoProduto+2)->codigo = 345;
    (novoProduto+2)->preco = 200;

    strcpy((novoProduto+3)->nome+0, "SSD Nvme");
    (novoProduto+3)->codigo = 456;
    (novoProduto+3)->preco = 250;

    strcpy((novoProduto+4)->nome+0, "Fonte de Alimentacao");
    (novoProduto+4)->codigo = 567;
    (novoProduto+4)->preco = 350;

    printf("======= Os produtos cadastrados sao =======\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("Produto 0%d:\n Nome: %s\n Codigo: %d\n Preco: %.2f reais\n", i+1, (novoProduto+i)->nome, (novoProduto+i)->codigo, (novoProduto+i)->preco);
        printf("\n");
    }

    free(novoProduto);
    return 0;
}