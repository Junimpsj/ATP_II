#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char descricao[MAX_CHAR];
    int prioridade;
    int concluida;
} Tarefa;

int main() {

    Tarefa novaTarefa;

    strcpy(novaTarefa.descricao, "Estudar para a prova de ATP II");
    novaTarefa.prioridade = 1;
    novaTarefa.concluida = 0;

    printf("Informacoes da Tarefa:\n");
    printf("Descricao: %s\n", novaTarefa.descricao);
    printf("Prioridade: %d\n", novaTarefa.prioridade);
    printf("Concluida: %s\n", novaTarefa.concluida ? "Sim" : "Nao");

    return 0;
}
