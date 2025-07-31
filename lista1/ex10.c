#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int vetor[10], soma, media, i;
    int maxrand = 150, minrand = 50;
    srand(time(NULL));

    //preenchendo o vetor com numeros aleatórios
    for(i = 0 ; i < 10 ; i++) {
        vetor[i] = rand() % (maxrand - minrand + 1) + minrand;
    }

    //calculando a soma dos números do vetor
    for(i = 0 ; i < 10 ; i++) {
        soma = soma + vetor[i];
    }

    //calculando a media dos números do vetor
    media = soma / 10;

    //imprimindo os resultados
    printf("[");
    for(i = 0 ; i < 10 ; i++) {
        printf("%d, ", vetor[i]);
    }
    printf("]\n");
    printf("Media dos elementos: [%d]", media);

    return 0;
}