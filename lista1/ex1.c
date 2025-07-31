#include <stdio.h>

int main() {

    int vetor[10], i;

    //preenchendo o vetor
    for(i = 0 ; i < 10; i++){
        vetor[i] = i;
    }
    
    printf("[");
    
    //imprimindo o vetor
    for(i = 0 ; i < 10 ; i++){
        printf("%d, ",i);
    }

    printf("]");

    return 0;
}