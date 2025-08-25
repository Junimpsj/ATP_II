#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 6
#define MAXRAND 200
#define MINRAND -200

int contarPositivos(int *vetor, int n);

int main() {

    srand(time(NULL));

    int *vetor, i, contPos;

    vetor = malloc(sizeof(int)*TAMANHO_VETOR);

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

    //passando pra função
    contPos = contarPositivos(vetor, TAMANHO_VETOR);

    //printando o resultado
    printf("Do vetor gerado, %d sao numeros positivos", contPos);

    free(vetor);

    return 0;
}

int contarPositivos(int *vetor, int n) {
    int i, contPos = 0;

    for(i = 0 ; i < n ; i++) {
        if(*(vetor + i) > 0) {
            contPos++;
        }
    }

    return contPos;
}