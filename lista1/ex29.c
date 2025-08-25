#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_VETOR 5
#define MAX_CARACTERES 50

int main() {

    char *vetor[TAMANHO_VETOR];
    int i;

    //alocando memória para cada string
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        vetor[i] = malloc(sizeof(char)*MAX_CARACTERES);
    }

    //lendo as strings
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        printf("Insira a [%d] String: ", i+1);
        fgets(vetor[i], MAX_CARACTERES, stdin);
        vetor[i][strcspn(vetor[i], "\n")] = '\0';
    }

    //imprimindo as strings
    for(i = 0; i < TAMANHO_VETOR ; i++){
        printf("String [%d]: %s\n", i+1, vetor[i]);
    }

    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        free(vetor[i]);
    }

    return 0;
}

//OBSERVAÇÃO: eu gosto de utilizar aritmética de ponteiros, para utilizar aqui
//ao inves de utilizarmos vetor[i], utilizamos *(vetor + i)