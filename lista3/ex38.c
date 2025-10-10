#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 80

typedef struct {
    char logradouro[MAX_CHAR];
    int numero;
    char complemento[MAX_CHAR];
} Localizacao;

typedef struct {
    char nome[MAX_CHAR];
    Localizacao localizacao;
} Estabelecimento;

int main() {

    Estabelecimento *estabelecimento;

    estabelecimento = malloc(sizeof(Estabelecimento)*2);

    strcpy((estabelecimento)->nome, "Restaurante Bom Sabor");
    strcpy((estabelecimento+1)->nome, "Padaria Central");

    strcpy(estabelecimento->localizacao.logradouro, "Avenida Paulista");
    estabelecimento->localizacao.numero = 1500;
    strcpy(estabelecimento->localizacao.complemento, "Sala 10");

    strcpy((estabelecimento+1)->localizacao.logradouro, estabelecimento->localizacao.logradouro);
    (estabelecimento+1)->localizacao.numero = estabelecimento->localizacao.numero;
    strcpy((estabelecimento+1)->localizacao.complemento, estabelecimento->localizacao.complemento);

    printf("Estabelecimentos cadastrados!\n");
    printf("1° Estabelecimento:\nNome: %s\nEndereco: %s, n°%d, %s\n\n", estabelecimento->nome, estabelecimento->localizacao.logradouro, estabelecimento->localizacao.numero, estabelecimento->localizacao.complemento);
    printf("2° Estabelecimento:\nNome: %s\nEndereco: %s, n°%d, %s\n", (estabelecimento+1)->nome, (estabelecimento+1)->localizacao.logradouro, (estabelecimento+1)->localizacao.numero, (estabelecimento+1)->localizacao.complemento);

    free(estabelecimento);
    return 0;
}
