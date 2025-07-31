#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int vetor[20], i;
    srand(time(NULL));

    printf("[");

    //preenchendo o vetor com números aleatórios e imprimindo
    for(i = 0 ; i < 20 ; i++) {
        vetor[i] = 1 + rand() % 100;
        printf("%d, ", vetor[i]);
    }

    printf("]");

    return 0;
}