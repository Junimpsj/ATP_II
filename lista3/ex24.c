#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef union {
    int codigo;
    char nome[MAX_CHAR];
} Identificador;

int main() {

    Identificador id;

    id.codigo = 12345;
    printf("Identificador (codigo): %d\n", id.codigo);

    strcpy(id.nome, "Usuario123");
    printf("Identificador (nome): %s\n", id.nome);

    return 0;
}
