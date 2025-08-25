#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_VETOR 3
#define MAX_CARACTERES 50

void ordenar_alfabetico(char *vetor[], int n);

int main() {

    char *vetor[TAMANHO_VETOR], *aux;
    int i;

    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        vetor[i] = malloc(sizeof(char)*MAX_CARACTERES);
    }
    
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        printf("Insira a %d String: ", i+1);
        fgets(vetor[i], MAX_CARACTERES, stdin);
        vetor[i][strcspn(vetor[i], "\n")] = '\0';
    }


    ordenar_alfabetico(vetor, TAMANHO_VETOR);

    printf("Strings ordenadas alfabeticamente: [");
    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        if(i == TAMANHO_VETOR - 1) {
            printf("%s", vetor[i]);
        }else {
            printf("%s, ", vetor[i]);
        }
    }
    printf("]");

    for(i = 0 ; i < TAMANHO_VETOR ; i++) {
        free(vetor[i]);
    }
    
}

void ordenar_alfabetico(char *vetor[], int n) {
    char aux[MAX_CARACTERES];
    int i, j;

    for(j = 0 ; j < n - 1 ; j++) {
        for(i = 0 ; i < n - 1 ; i++) {
            if(strcmp(vetor[i], vetor[i+1]) > 0) {
                strcpy(aux, vetor[i]);
                strcpy(vetor[i], vetor[i+1]);
                strcpy(vetor[i+1], aux);
            }
        }
    }
}