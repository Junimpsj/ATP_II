#include <stdio.h>
#include <stdlib.h>
#include <time.h.>

#define MINRAND 0
#define MAXRAND 100

int main() {

    srand(time(NULL));

    int vetor[5], i,*ptr;

    ptr = &vetor[0];

    //preenchendo o vetor com ponteiro
    for(i = 0 ; i < 5 ; i++) {
        *(ptr + i) = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
    }

    //imprimindo o vetor com aritmetica de ponteiros
    printf("vetor original: ");
    printf("[");

    for(i = 0 ; i < 5 ; i++) {
        printf("%d, ", *(ptr + i));
    }

    printf("]\n");

    //somando +10 aos valores do vetor
    for(i = 0 ; i < 5 ; i++) {
        *(ptr + i) += 10;
    }

    //imprimindo o vetor alterado
    printf("vetor alterado: ");
    printf("[");

    for(i = 0 ; i < 5 ; i++) {
        printf("%d, ", *(ptr + i));
    }

    printf("]");
 
    return 0;
}