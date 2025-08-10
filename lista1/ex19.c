#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MINRAND 0
#define MAXRAND 100.1
#define TAMANHO_VETOR 8

int main() {

    srand(time(NULL));

    float vetor[TAMANHO_VETOR], soma, media, *ptr;
    int i;

    ptr = &vetor[0];

    //preenchendo o vetor
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        *(ptr + i) = MINRAND + rand() * (MAXRAND - MINRAND) / RAND_MAX;
    }

    //imprimindo o vetor gerado
    printf("[");

    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        if(i == 7) {
            printf("%.2f", *(ptr + i));
        }else {
            printf("%.2f, ", *(ptr + i));
        }
    }

    printf("]\n");

    //somando os elementos
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        soma += *(ptr +i);
    }

    //calculando a média
    media = soma / TAMANHO_VETOR;

    //mostrando o resultado da media
    printf("Media dos elementos do vetor: [%.2f]", media);

    return 0;
}