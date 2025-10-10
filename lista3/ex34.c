#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef enum {pequeno, medio, grande, extragrande} Tamanho;

int main() {

    const char *nomesTamanhos[] = {"pequeno", "medio", "grande", "extragrande"};

    printf("Os valores do enum Tamanho sao: ");

    for(int i = pequeno ; i <= extragrande ; i++) {
        printf("%d, ", i);
    }

    printf("\n\nOu entao: ");

    for(int i = 0 ; i < 4 ; i++) {
        printf("\nO valor %d corresponde ao tamanho: %s", i, nomesTamanhos[i]);
    }

    return 0;
}
