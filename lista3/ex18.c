#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char titulo[MAX_CHAR];
    char diretor[MAX_CHAR];
    int ano;
} Filme;

int main() {

    Filme *novoFilme;
    novoFilme = malloc(sizeof(Filme));

    strcpy(novoFilme->titulo, "Inception");
    strcpy(novoFilme->diretor, "Christopher Nolan");
    novoFilme->ano = 2010;

    printf("Informacoes do Filme:\n");
    printf("Titulo: %s\n", novoFilme->titulo);
    printf("Diretor: %s\n", novoFilme->diretor);
    printf("Ano: %d\n", novoFilme->ano);

    free(novoFilme);
    return 0;
}
