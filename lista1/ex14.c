#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRAND 100
#define MINRAND 0

int main() {

    srand(time(NULL));

    int vetor[5], i , *ptr;

    ptr = &vetor[0];

    //preenchendo o vetor aleatoriamente - sem ponteiro
    for(i = 0 ; i < 5 ; i++) {
        vetor[i] = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
    }

    //imprimindo o vetor preenchido aleatoriamente - com ponteiro
    ptr = vetor;
    printf("Vetor preenchido aleatoriamente: ");
    printf("[");

    for(i = 0 ; i < 5 ; i++) {
        printf("%d, ", *ptr);
        ptr++;
    }

    printf("]\n");

    //modificando os valores com ponteiro
    ptr = vetor;
    for(i = 0 ; i < 5 ; i++) {
        *ptr = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
        ptr++;
    }

    //imprimindo o vetor modificado com ponteiro
    ptr = vetor;
    printf("Vetor modificado com ponteiro: ");
    printf("[");

    for(i = 0 ; i < 5 ; i++) {
        printf("%d, ", *ptr);
        ptr++;
    }

    printf("]\n");

    return 0;
}