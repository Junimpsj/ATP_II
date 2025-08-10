#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MINRAND 0
#define MAXRAND 100
#define TAMANHO_VETOR 10

int main() {

    srand(time(NULL));

    int vetor[TAMANHO_VETOR], *ptr, maior, menor, i;

    ptr = &vetor[0];

    //preenchendo o vetor
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        *(ptr + i) = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
    }

    //encontrando o maior número
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        if(i == 0) {
            maior = *(ptr + i);
        }
        if(*(ptr + i) > maior) {
            maior = *(ptr + i);
        }
    }

    //encontrando o menor número
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        if(i == 0) {
            menor = *(ptr + i);
        }
        if(*(ptr + i) < menor) {
            menor = *(ptr + i);
        }
    }

    //imprimindo o vetor
    printf("[");

    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        if(i == TAMANHO_VETOR - 1) {
            printf("%d", *(ptr + i));
        } else{
            printf("%d, ", *(ptr + i));
        }
    }

    printf("]\n");

    //mostrando maior e menor número
    printf("Maior numero do vetor: [%d]\n", maior);
    printf("Menor numero do vetor: [%d]", menor);

    return 0;
}
