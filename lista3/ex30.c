#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    float nota1;
    float nota2;
    float media;
} Aluno;

void calcularMedia(Aluno *aluno);

int main() {

    Aluno novoAluno;

    strcpy(novoAluno.nome, "Pedro");
    novoAluno.nota1 = 8.5;
    novoAluno.nota2 = 7.0;

    calcularMedia(&novoAluno);

    printf("Aluno: %s\n", novoAluno.nome);
    printf("Nota 1: %.2f\n", novoAluno.nota1);
    printf("Nota 2: %.2f\n", novoAluno.nota2);
    printf("Media: %.2f\n", novoAluno.media);

    return 0;
}

void calcularMedia(Aluno *aluno) {
    aluno->media = (aluno->nota1 + aluno->nota2) / 2.0;
}
