#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef union {
    int inteiro;
    float flutuante;
} Valor;

int main() {

    Valor valor;

    valor.inteiro = 72;
    printf("Valor inteiro: %d\n", valor.inteiro);

    valor.flutuante = 10.724;
    printf("Valor flutuante: %.3f", valor.flutuante);

    return 0;
}