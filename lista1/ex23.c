#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAMANHO_VETOR 10

int main() {
    
    int vetor[TAMANHO_VETOR], i , j, *ptr;
    bool palindromo;

    ptr = &vetor[0];

    //preenchendo o vetor - o usuario que vai preencher dessa vez
    i = 0;
    do{
        printf("Insira o valor [%d]: ", i);
        scanf("%d", (ptr + i));
        i++;

    }while(i<TAMANHO_VETOR);

    //imprimindo o vetor
    printf("O vetor: ");
    printf("[");

    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        if(i == TAMANHO_VETOR - 1) {
            printf("%d", *(ptr + i));
        }else {
            printf("%d, ", *(ptr + i));
        }
    }

    printf("] ");


    //verificando se é palindromo
    palindromo = true;
    i = 0;
    j = TAMANHO_VETOR - 1;

    while(i<j) {
        if(*(ptr + i) != *(ptr + j)) {
            palindromo = false;
            break;
        }
        i++;
        j--;
    }

    //exibindo o resultado:
    if(palindromo == true){
        printf("eh palindromo");
    }else {
        printf("nao eh palindromo");
    }

    return 0;
}