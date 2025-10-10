#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 80

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char descricao[MAX_CHAR];
    Data data;
    int concluido;
} Compromisso;

int main() {

    Compromisso *compromisso;

    compromisso = malloc(sizeof(Compromisso)*2);

    strcpy((compromisso)->descricao, "Reuniao com cliente");
    strcpy((compromisso+1)->descricao, "Apresentacao do projeto");

    compromisso->data.dia = 15;
    compromisso->data.mes = 10;
    compromisso->data.ano = 2025;
    compromisso->concluido = 0;

    (compromisso+1)->data.dia = compromisso->data.dia;
    (compromisso+1)->data.mes = compromisso->data.mes;
    (compromisso+1)->data.ano = compromisso->data.ano;
    (compromisso+1)->concluido = compromisso->concluido;

    printf("Compromissos cadastrados!\n");
    printf("1° Compromisso:\nDescricao: %s\nData: %02d/%02d/%d\nConcluido: %s\n\n", compromisso->descricao, compromisso->data.dia, compromisso->data.mes, compromisso->data.ano, compromisso->concluido ? "Sim" : "Nao");
    printf("2° Compromisso:\nDescricao: %s\nData: %02d/%02d/%d\nConcluido: %s\n", (compromisso+1)->descricao, (compromisso+1)->data.dia, (compromisso+1)->data.mes, (compromisso+1)->data.ano, (compromisso+1)->concluido ? "Sim" : "Nao");

    free(compromisso);
    return 0;
}
