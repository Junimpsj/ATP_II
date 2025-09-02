#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRAND 50
#define MINRAND 0

int maiorElemento(int *vetor, int tamanho);

int main() {

    srand(time(NULL));

    int *vetor, n, i;

    printf("Qual o tamanho do vetor desejado? ");
    scanf("%d", &n);

    vetor = malloc(sizeof(int)*n);

    for(i = 0 ; i < n ; i++) {
        *(vetor + i) = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
    }

    printf("Vetor gerado: [");
    for(i = 0 ; i < n ; i++) {
        if(i == n-1) {
            printf("%d]\n", *(vetor + i));
        } else {
            printf("%d, ",*(vetor + i));
        }
    }

    printf("O maior elemento encontrado foi [%d]", maiorElemento(vetor, n));

    free(vetor);

    return 0;
}

int maiorElemento(int *vetor, int tamanho) {

    int maiorRestante;
    
    if (tamanho == 1)
        return vetor[0];
        
    maiorRestante = maiorElemento(vetor, tamanho - 1);

    return (*(vetor + (tamanho - 1)) > maiorRestante ? *(vetor + (tamanho - 1)) : maiorRestante);

}