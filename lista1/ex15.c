#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAXRAND 100
#define MINRAND 0

int main() {

    srand(time(NULL));

    int vetor[7], i, *ptr, soma;

    ptr = &vetor[0];

    //preenchendo o vetor com ponteiro
    for(i = 0 ; i < 7 ; i++) {
        *ptr = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
        ptr++;
    }

    //fazendo a soma dos elementos do vetor com ponteiro
    ptr = vetor;
    for(i = 0 ; i < 7 ; i++) {
        soma = soma + *ptr;
        ptr++;
    }

    //imprimindo o vetor com ponteiro
    ptr = vetor;
    printf("[");

    for(i = 0 ; i < 7 ; i++) {
        printf("%d, ", *ptr);
        ptr++;
    }

    printf("]\n");

    printf("Soma dos elementos do vetor: [%d]", soma);

    return 0;
}