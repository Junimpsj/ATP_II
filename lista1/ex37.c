#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 5

int calcular_media(int *vetor, int n);

int main() {

    //cara eu não sei pq mas eu to afim de fazer usando alocação dinâmica aqui, onde um ponteiro é um vetor (assim como é normalmente)
    //e pra isso vou manipular com aritmética de ponteiros também :thumbs_up:
    int *vetor, i, resultMedia;

    vetor = malloc(sizeof(int)*TAMANHO_VETOR);

    //inserindo elementos no array
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        printf("Insira o [%d] elemento: ", i+1);
        scanf("%d", (vetor + i));
    }

    //passando pela função de calcular a media
    resultMedia = calcular_media(vetor, TAMANHO_VETOR);

    //printando resultado
    printf("A media dos elemento inseridos no vetor eh: %d", resultMedia);

    free(vetor);
    return 0;
}

int calcular_media(int *vetor, int n) {

    int i, soma = 0, resultMedia;

    for(i = 0 ; i < n ; i++) {
        soma+= *(vetor + i) ;
    }

    resultMedia = soma/n;

    return resultMedia;

}