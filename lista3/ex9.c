#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    int idade;
    int altura;
} Pessoa;

int main() {

    int tamanho = sizeof(Pessoa);

    printf("O tamanho da Struct Pessoa eh: %d bytes", tamanho);

    return 0;
}