#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MINRAND 0
#define MAXRAND 100

int main() {

    srand(time(NULL));

    int vetor[10], i, *ptr, soma = 0;

    ptr = &vetor[0];

    //preenchendo o vetor
    for(i = 0 ; i < 10 ; i++) {
        *(ptr + i) = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
    }

    // imprimindo o vetor
    printf("[");

    for(i = 0 ; i < 10 ; i++) {
        if(i == 9) {
            printf("%d", *(ptr + i));
        } else{
            printf("%d, ", *(ptr + i));
        }
    }

    printf("]\n");

    //somando os valores do vetor
    for (i = 0 ; i < 10 ; i++) {
        soma += *(ptr + i);
    }

    //mostrando o resultado da soma
    printf("Soma dos elementos do vetor: [%d]", soma);

    return 0;
}