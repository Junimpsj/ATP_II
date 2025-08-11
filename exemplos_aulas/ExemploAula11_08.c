//O prof.Danillo pediu pra gente construir esse exemplo pra testar a alocação de dinâmica de ponteiros
//E ai tentar preencher ele e tals

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRAND 100
#define MINRAND 0

void min_max(int *vetor, int n, int *min, int *max, int *posMax, int *posMin);

int main() {

    srand(time(NULL));

    int *vetor, i, n, min, max, posMax, posMin;

    printf("Quantidade de valores do vetor: ");
    scanf("%d", &n);

    vetor = malloc(sizeof(int)*n);
    if(!vetor){
        printf("Falhamos ao alocar a memória");
        return 1;
    }
    
    for(i = 0 ; i < n ; i++) {
        *(vetor + i) = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
    }

    printf("[");

    for(i = 0 ; i < n ; i++) {
        if(i == n-1){
            printf("%d", *(vetor + i));
        }else {
            printf("%d, ", *(vetor + i));
        }
    }

    printf("]\n");

    min_max(vetor, n, &min, &max, &posMax, &posMin);

    printf("Maior valor: [%d] na posicao [%d] \n", max, posMax);
    printf("Menor vaor: [%d] na posicao [%d]", min, posMin);

    free(vetor);
    return 0;
}

void min_max(int *vetor, int n, int *min, int *max, int *posMax, int *posMin) {
    int i;

    *min = *max = vetor[0];
    *posMin = *posMax = 1;

    for(i = 1 ; i < n ; i++) {
        if(*(vetor + i) > *max) {
            *max = *(vetor + i);
            *posMax = i+1;
        }
        if(*(vetor + i) < *min) {
            *min = *(vetor + i);
            *posMin = i+1;
        }
    };
}