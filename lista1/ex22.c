#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MINRAND 0
#define MAXRAND 100
#define TAMANHO_VETOR 20

int main() {
    
    srand(time(NULL));

    int vetor[TAMANHO_VETOR], *ptr, i, cont_par = 0, cont_impares = 0;

    ptr = &vetor[0];

    //preenchendo o vetor
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        *(ptr + i) = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
    }

    //contando os numeros pares
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        if(*(ptr + i) % 2 == 0) {
            cont_par++;
        }
    }

    //contando os numeros primos
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        if(*(ptr + i) % 2 != 0) {
            cont_impares++;
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

    //pares e impares
    printf("Sao %d numeros pares e %d numeros impares\n\n", cont_par, cont_impares);

    //imprimindo essa porra
    printf("Pares: ");
    printf("[");

    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        if(*(ptr + i) % 2 == 0){
            if(i == TAMANHO_VETOR - 1) {
                printf("%d", *(ptr + i));
            } else{
                printf("%d, ", *(ptr + i));
            }
        }
    }

    printf("]\n");

    printf("Impares: ");
    printf("[");

    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        if(*(ptr + i) % 2 != 0){
            if(i == TAMANHO_VETOR - 1) {
                printf("%d", *(ptr + i));
            } else{
                printf("%d, ", *(ptr + i));
            }
        }
    }

    printf("]");


    return 0;
}