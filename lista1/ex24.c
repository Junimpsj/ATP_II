#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXRAND 100
#define MINRAND 0
#define TAMANHO_VETOR 5

int main() {

    int vetor[5], i, *ptr;
    bool positivo = true;

    ptr = vetor;

    //preenchendo o vetor
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        printf("Insira o valor [%d]: ", i);
        scanf("%d", (ptr + i));
    }

    //imprimindo o vetor
    printf("[");

    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        if(i == TAMANHO_VETOR - 1) {
            printf("%d", *(ptr + i));
        }else {
            printf("%d, ", *(ptr + i));
        }
    }

    printf("]\n");

    //verificando
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        if(*(ptr + i) < 0) {
            positivo = false;
            break;
        }
    }

    if(positivo == false) {
        printf("Nem todos os elementos sao posivos, existem negativo no meio");
    }else {
        printf("Todos os elementos do vetor sao positivos");
    }

    return 0;
}