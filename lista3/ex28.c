#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 100

typedef struct {
    char titulo[MAX_CHAR];
    char autor[MAX_CHAR];
    int paginas;
} Livro;

int main() {

    Livro *livro;

    strcpy(livro->titulo, "1984");
    strcpy(livro->autor, "George Orwell");
    livro->paginas = 328;

    printf("Dados do Livro: %s, %s, %d paginas", livro->titulo, livro->autor, livro->paginas);

    return 0;
}
