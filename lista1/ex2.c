#include <stdio.h>

int main(){

    char vetor[5];
    int i;

    //preenchendo o vetor
    vetor[0] = 'a';
    vetor[1] = 'b';
    vetor[2] = 'c';
    vetor[3] = 'd';
    vetor[4] = 'e';

    printf("[");

    //imprimindo o vetor
    for(i = 0 ; i < 5 ; i++){
        printf("%c, ",vetor[i]);
    }

    printf("]");
    
    return 0;
}