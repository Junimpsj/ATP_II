#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 100

typedef struct {
    char titulo[MAX_CHAR];
    char autor[MAX_CHAR];
    int anoPublicacao;
} Publicacao;

int main() {

    Publicacao *publicacao;

    strcpy(publicacao->titulo, "O Senhor dos Aneis");
    strcpy(publicacao->autor, "J.R.R. Tolkien");
    publicacao->anoPublicacao = 1954;

    printf("Dados da Publicacao: %s, %s, %d", publicacao->titulo, publicacao->autor, publicacao->anoPublicacao);

    return 0;
}
