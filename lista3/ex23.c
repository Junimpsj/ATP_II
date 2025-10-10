#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    float salario;
    int idade;
} Funcionario;

int main() {

    int tamanho = sizeof(Funcionario);

    printf("O tamanho da Struct Funcionario eh: %d bytes", tamanho);

    return 0;
}
