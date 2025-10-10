#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    int matricula;
    float nota;
} Aluno;

void imprimirAluno(Aluno *novoAluno);

int main() {

    Aluno *novoAluno;

    printf("Insira os dados do Aluno:\n");

    printf("Nome: ");
    scanf("%s", novoAluno->nome);

    printf("Numero da matricula: ");
    scanf("%d", &novoAluno->matricula);

    printf("Nota do aluno: ");
    scanf("%f", &novoAluno->nota);

    imprimirAluno(novoAluno);

    return 0;
}

void imprimirAluno(Aluno *novoAluno) {
    printf("Aluno cadastrado com sucesso!\n");
    printf("Confira os dados: %s, RA %d, Nota %.2f", novoAluno->nome, novoAluno->matricula, novoAluno->nota);
}