#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    int codigo;
    float preco;
} Item;

int main() {

    int tamanho = sizeof(Item);

    printf("O tamanho da Struct Item eh: %d bytes", tamanho);

    return 0;
}
