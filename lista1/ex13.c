#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRAND 100
#define MINRAND 0

int main() {

    srand(time(NULL));

    int vetor[5], i, *ptr;

    //recebendo o endereço de memória de cada elemento no vetor para o ponteiro
    ptr = &vetor[0];

    //preenchendo o vetor
    for(i = 0 ; i < 5 ; i++) {
        vetor[i] = rand() % (MAXRAND - MINRAND + 1) + MINRAND;
    }

    printf("conteudo do endereco: ");
    printf("[");

    //imprimindo com ponteiro
    for(i = 0 ; i < 5 ; i++) {
        printf("%d, ", *ptr);
        ptr++;
    }

    printf("]\n");

    printf("endereco de memoria de cada valor: ");
    printf("[");

    //imprimindo com ponteiro
    for(i = 0 ; i < 5 ; i++) {
        printf("%p, ", ptr);
        ptr++;
    }
    
    printf("]");

    return 0;
}