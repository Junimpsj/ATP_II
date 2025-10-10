#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char titulo[MAX_CHAR];
    char artista[MAX_CHAR];
    int duracao;
} Musica;

int main() {

    Musica novaMusica;

    strcpy(novaMusica.titulo, "Bohemian Rhapsody");
    strcpy(novaMusica.artista, "Queen");
    novaMusica.duracao = 354;

    printf("Informacoes da Musica:\n");
    printf("Titulo: %s\n", novaMusica.titulo);
    printf("Artista: %s\n", novaMusica.artista);
    printf("Duracao: %d segundos\n", novaMusica.duracao);

    return 0;
}
