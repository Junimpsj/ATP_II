#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int vetor[12], contador = 0, i;
    int maxrand = 20, minrand = -20;
    srand(time(NULL));

    //preenchendo o vetor
    for(i = 0 ; i < 12 ; i++) {
        vetor[i] = rand() % (maxrand - minrand + 1) + minrand;
    }

    //imprimindo o vetor completo
    printf("[");

    for(i = 0 ; i < 12 ; i++) {
        printf("%d, ",vetor[i]);
    }

    printf("]\n\n");

    //encontando e imprimindo números negativos
    printf("Resultado negativos: [");

    for(i = 0 ; i < 12 ; i++) {
        if(vetor[i] < 0) {
            printf("%d, ", vetor[i]);
            contador++;
        }
    }

    printf("]\n");
    printf("Foram [%d] os numeros negativos encontrados", contador);


    return 0;
}