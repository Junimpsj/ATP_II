#include <stdio.h>

int main() {
    
    char vetor[8];
    int i, cont_vogal = 0;

    printf("Insira 8 caracteres:\n");

    //lendo caracteres
    for(i = 0 ; i < 8 ; i++) {
        printf("[%d]: ", i);
        scanf(" %c", &vetor[i]);
    }

    //verificando quantos são vogais
    for(i = 0 ; i < 8 ; i++) {
        if(vetor[i] == 'a' || vetor[i] == 'A' || vetor[i] == 'e' || vetor[i] == 'E' || vetor[i] == 'i' 
            || vetor[i] == 'I' || vetor[i] == 'o' || vetor[i] == 'O' || vetor[i] == 'u' || vetor[i] == 'U') {
            cont_vogal++;
        }
    }

    //mostrando quantas vogais tem
    printf("Sao vogais: [%d] caracteres", cont_vogal);

    return 0;
}