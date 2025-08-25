#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 8
#define MAXRAND 200
#define MINRAND 0

int inverterVetor(int *vetor, int *vetorInverso, int n);

int main() {

    srand(time(NULL));

    int *vetor, *vetorInverso, i;

    vetor = malloc(sizeof(int)*TAMANHO_VETOR);
    vetorInverso = malloc(sizeof(int)*TAMANHO_VETOR);

    //aqui eu decidi gerar o vetor aleatório pq sim
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        *(vetor + i) = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
    }

    //printando o vetor aleatorio gerado
    printf("[");

    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        if(i == TAMANHO_VETOR - 1) {
            printf("%d", *(vetor +i));
        }else {
            printf("%d, ", *(vetor +i));
        }
    }

    printf("]\n\n");

    //passando pra funcao
    inverterVetor(vetor, vetorInverso, TAMANHO_VETOR);

    //printando o vetor inverso
    printf("Esse eh o inverso do vetor gerado:\n");
    printf("[");

    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        if(i == TAMANHO_VETOR - 1) {
            printf("%d", *(vetorInverso +i));
        }else {
            printf("%d, ", *(vetorInverso +i));
        }
    }

    printf("]\n\n");

    free(vetor);
    free(vetorInverso);

    return 0;
}

int inverterVetor(int *vetor, int *vetorInverso, int n) {
    int i;

    for(i = 0 ; i < n ; i++) {
        if(i == 0) {*(vetorInverso + i) = *(vetor + TAMANHO_VETOR-1);}
        *(vetorInverso + i) = *(vetor + (n - 1 - i));
    }
}