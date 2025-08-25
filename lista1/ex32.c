#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_VETOR 4
#define MAX_CARACTERES 50

void maior_comprimento(char *vetor[], int n, char **stringMaior, int *qtdChar);

int main() {

    char *vetor[TAMANHO_VETOR], *stringMaior;
    int i, qtdChar;

    //alocando espaço para os elementos do vetor
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        *(vetor + i) = malloc(sizeof(char)*MAX_CARACTERES);
    }

    //alocando espaço para stringMaior
    stringMaior = malloc(sizeof(char)*MAX_CARACTERES);

    //lendo as string
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        printf("Insira a [%d] String: ", i+1);
        fgets(*(vetor + i), MAX_CARACTERES, stdin);
        (*(vetor + i))[strcspn(*(vetor + i), "\n")] = '\0';
    }

    //passando pela função de achar a maior
    maior_comprimento(vetor, TAMANHO_VETOR, &stringMaior, &qtdChar);

    //exibindo o resultado;
    printf("String de maior comprimento: %s, com %d caracteres\n", stringMaior, qtdChar);

    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        free(*(vetor + i));
    }
    free(stringMaior);

    return 0;
}

void maior_comprimento(char *vetor[], int n, char **stringMaior, int *qtdChar) {
    int i;
    *qtdChar = strlen(vetor[0]);
    strcpy(*stringMaior, vetor[0]);
    for(i = 1 ; i < n ; i++) {
        if(strlen(vetor[i]) > *qtdChar) {
            strcpy(*stringMaior, vetor[i]);
            *qtdChar = strlen(vetor[i]);
        }
    }
}