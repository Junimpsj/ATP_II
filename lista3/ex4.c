#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    int matricula;
    float nota;
} Aluno;

int main() {

    Aluno novoAluno;

    strcpy(novoAluno.nome, "Pablo");
    novoAluno.matricula = 231254024;
    novoAluno.nota = 8.6;

    printf("Aluno: %s, Matricula: %d, Nota: %.2f", novoAluno.nome, novoAluno.matricula, novoAluno.nota);

    return 0;
}