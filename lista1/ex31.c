#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_VETOR 5

int maior_valor(int *vetor[], int n);

int main() {

    int *vetor[TAMANHO_VETOR], i, maiorValor;

    //separando a memória para cada ponteiro do vetor
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        *(vetor + i) = malloc(sizeof(int));
    }

    //lendo os inteiros
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        printf("Insira o [%d] valor: ", i+1);
        scanf("%d", *(vetor + i));
    }

    //encontrando o maior valor entre entre os números
    maiorValor = maior_valor(vetor, TAMANHO_VETOR);

    //printando o resultado
    printf("O maior valor dentre os elementos inseridos eh: %d", maiorValor);

    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        free(*(vetor + i));
    }

    return 0;
}

int maior_valor(int *vetor[], int n) {
    int i, maiorValor;
    maiorValor = *vetor[0];

    for(i = 1 ; i < n ; i++) {
        if(*vetor[i] > maiorValor) {
            maiorValor = *vetor[i];
        }
    }
    return maiorValor;
}