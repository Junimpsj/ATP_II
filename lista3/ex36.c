#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    int codigo;
    char tipo[MAX_CHAR];
} Equipamento;

int main() {

    Equipamento *equipamento;

    strcpy(equipamento->nome, "Impressora");
    equipamento->codigo = 789;
    strcpy(equipamento->tipo, "Multifuncional");

    printf("Dados do Equipamento:\n");
    printf("Nome: %s\n", equipamento->nome);
    printf("Codigo: %d\n", equipamento->codigo);
    printf("Tipo: %s\n", equipamento->tipo);

    return 0;
}
