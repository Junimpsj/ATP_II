#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 60
struct livro {
    char titulo[MAX_CHAR];
    char autor[MAX_CHAR];
    int ano;
};

int main() {

    struct livro novoLivro;

    strcpy(novoLivro.titulo, "Memorias Postumas de Bras Cubas");
    strcpy(novoLivro.autor, "Machado de Assis");
    novoLivro.ano = 1881;

    printf("Informacoes do Livro:\n");
    printf("Titulo: %s\n", novoLivro.titulo);
    printf("Autor do Livro: %s\n", novoLivro.autor);
    printf("Ano de Publicacao: %d\n", novoLivro.ano);

    return 0;
}