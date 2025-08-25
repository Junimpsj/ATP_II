#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARACTERES 50

int main(int argc, char *argv[]) {

    //verificação de erros
    if(argc != 2) {
        printf("Quantidade de parâmetros errada, no máximo 1!");
        return 1;
    }

    int tamanho = strlen(argv[1]);

    printf("A string %s tem %d caracteres", argv[1], tamanho);

    free(argv[1]);

    return 0;
}