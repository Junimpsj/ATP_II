#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int vetor[15], maiorValor, i;
    srand(time(NULL));

    //preenchendo o vetor
    for(i = 0 ; i < 15 ; i++) {
        vetor[i] = rand() % 50;
    }

    //encontrando o maior valor
    for(i = 0 ; i < 15 ; i++) {
        if(i == 0) {
            maiorValor = vetor[i];
        }

        if(vetor[i] > maiorValor) {
            maiorValor = vetor[i];
        }
    }

    //imprimindo o resultado
    printf("[");
    for(i = 0 ; i < 15 ; i++) {
        printf("%d, ", vetor[i]);
    }
    printf("]\n");
    printf("O maior valor encontrado foi [%d]", maiorValor);

    return 0;
}