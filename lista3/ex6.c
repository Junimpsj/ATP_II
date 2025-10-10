#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef enum {janeiro, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro} Mes;

typedef struct {
    int dia;
    Mes mes;
    int ano;
} Data;

typedef struct {
    char nome[MAX_CHAR];
    Data nascimento;
    double CPF;
} Pessoa;

int main() {

    Pessoa *novaPessoa = malloc(sizeof(Pessoa));

    strcpy(novaPessoa->nome, "Besteti");
    novaPessoa->nascimento.dia = 23;
    novaPessoa->nascimento.mes = 4;
    novaPessoa->nascimento.ano = 2001;
    novaPessoa->CPF = 12345678900;

    printf("Dados da Pessoa:\n");
    printf("Nome: %s, Data de Nascimento: %d/%d/%d, CPF: %.0lf", novaPessoa->nome, novaPessoa->nascimento.dia, novaPessoa->nascimento.mes, novaPessoa->nascimento.ano, novaPessoa->CPF);

    return 0;
}