#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef enum {vermelho, verde, azul, amarelo, preto} Cor;

int main() {

    const char *nomesCores[] = {"vermelho", "verde", "azul", "amarelo", "preto"};

    printf("Os valores do enum Cor sao: ");

    for(int i = vermelho ; i <= preto ; i++) {
        printf("%d, ", i);
    }

    printf("\n\nOu entao: ");

    for(int i = 0 ; i < 5 ; i++) {
        printf("\nO valor %d corresponde a cor: %s", i, nomesCores[i]);
    }

    return 0;
}
