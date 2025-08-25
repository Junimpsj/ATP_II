#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10

int maiorElemento(int *vetor, int n);

int main() {

    int *vetor, i, maiorElement;

    vetor = malloc(sizeof(int)*TAMANHO_VETOR);

    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        printf("Insira o [%d] elemento: ", i+1);
        scanf("%d", (vetor + i));
    }

    maiorElement = maiorElemento(vetor, TAMANHO_VETOR);

    printf("O maior elemento do vetor eh: %d", maiorElement);

    free(vetor);

    return 0;
}

int maiorElemento(int *vetor, int n) {
    int i, maiorElement;

    for(i = 0 ; i < n ; i++) {
        if(i == 0) {
            maiorElement = *(vetor + i);
        }
        if(*(vetor + i) > maiorElement) {
            maiorElement = *(vetor + i);
        }
    }

    return maiorElement;
}