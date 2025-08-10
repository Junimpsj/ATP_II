#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MINRAND 97
#define MAXRAND 122
#define TAMANHO_VETOR 12

int main() {

    srand(time(NULL));

    char vetor[TAMANHO_VETOR], *ptr;
    int i;

    ptr = &vetor[0];

    //preenchendo o vetor
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        *(ptr + i) = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
    }

    //imprimindo o vetor
    printf("Vetor original: ");
    printf("[");

    for(i = 0 ; i < TAMANHO_VETOR ; i ++) {
        if( i == TAMANHO_VETOR - 1) {
            printf("%c", *(ptr + i));
        }else {
            printf("%c, ", *(ptr + i));
        }
    }
    
    printf("]\n");

    //imprimindo vetor inverso
        printf("Vetor inverso: ");
    printf("[");

    for(i = TAMANHO_VETOR - 1 ; i >= 0 ; i--) {
        if( i == 0) {
            printf("%c", *(ptr + i));
        }else {
            printf("%c, ", *(ptr + i));
        }
    }
    
    printf("]\n");

    return 0;
}