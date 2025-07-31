#include <stdio.h>

int main(){

    float vetorFib[8];
    int i;

    //declarando os casos base de fibonacci
    vetorFib[0] = 0.0;
    vetorFib[1] = 1.0;

    //preenchendo o vetor
    for(i = 2 ; i < 8 ; i++) {
        vetorFib[i] = vetorFib[i - 1] + vetorFib[i - 2];
    }

    printf("[");

    //imprimindo o vetor
    for(i = 0 ; i < 8 ; i++){
        printf("%.1f, ", vetorFib[i]);
    }

    printf("]");

    return 0;
}