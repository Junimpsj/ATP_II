#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 100

typedef struct {
    char nome[MAX_CHAR];
    char endereço[MAX_CHAR];
    int idade;
} Cliente;

int main() {

    Cliente *cliente;

    strcpy(cliente->nome, "Osvaldo");
    strcpy(cliente->endereço, "Rua das Rosas, n°42 - Jardim Bela Vista");
    cliente->idade = 62;

    printf("Dados do Cliente: %s, %s, %d", cliente->nome, cliente->endereço, cliente->idade);

    return 0;
}