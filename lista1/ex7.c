#include <stdio.h>

int main() {

    float vetor[6], soma, media;
    int i;

    printf("Insira seis valores:\n");

    //lendo os valores
    for(i = 0 ; i < 6 ; i++) {
        printf("[%d]: ",i);
        scanf("%f", &vetor[i]);
    }

    //somando os valores
    for(i = 0 ; i < 6 ; i++) {
        soma = soma + vetor[i];
    }

    //calculando a média
    media = soma / 6;

    //mostrando a média
    printf("Soma: [%.2f]\n", soma);
    printf("Media dos valores: [%.2f]", media);

    return 0;
}