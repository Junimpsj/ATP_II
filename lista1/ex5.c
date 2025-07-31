#include <stdio.h>

int main(){

    int vetor[5], i;

    printf("Digite 5 valores inteiros!\n");

    //lendo os cinco valores
    for(i = 0 ; i < 5 ; i++) {
        printf("[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    //imprimindo ordem inversa
    printf("Ordem inversa dos valores: [");
    for(i = 4 ; i >= 0 ; i--){
        printf("%d, ", vetor[i]);
    }
    printf("]");
    

    return 0;
}