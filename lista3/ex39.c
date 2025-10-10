#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    float peso;
    float altura;
    float imc;
} Pessoa;

void calcularIMC(Pessoa *pessoa);

int main() {

    Pessoa novaPessoa;

    strcpy(novaPessoa.nome, "Roberto");
    novaPessoa.peso = 75.5;
    novaPessoa.altura = 1.75;

    calcularIMC(&novaPessoa);

    printf("Pessoa: %s\n", novaPessoa.nome);
    printf("Peso: %.2f kg\n", novaPessoa.peso);
    printf("Altura: %.2f m\n", novaPessoa.altura);
    printf("IMC: %.2f\n", novaPessoa.imc);

    return 0;
}

void calcularIMC(Pessoa *pessoa) {
    pessoa->imc = pessoa->peso / (pessoa->altura * pessoa->altura);
}
