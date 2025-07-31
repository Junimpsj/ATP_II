#include <stdio.h>

int main(){

    int vetor[7], i, j = 1;

    //preenchendo o vetor
    for(i = 0 ; i < 7 ; i++) {
        vetor[i] = i + j;
        j++;
    } 

    printf("[");

    //imprimindo o vetor
    for(i = 0 ; i < 7 ; i++) {
        printf("%d, ", vetor[i]);
    }

    printf("]");

    return 0;
}