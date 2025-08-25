#include <stdio.h>
#include <stdlib.h>

#define QTD_ARGS 6

int maiorInteiro(int vetor[], int n) {
    
    int maiorElement;

    for(int i = 0 ; i < n ; i++) {
        if(i == 0) {
            maiorElement = vetor[i];
        }
        if(vetor[i] > maiorElement) {
            maiorElement = vetor[i];
        }
    }

    return maiorElement;
}

int main(int argc, char *argv[QTD_ARGS]) {

    //tratamento de erros
    if(argc != QTD_ARGS) {
        printf("Quantidade de parametros incorreta! Utilize 5 parametros!");
        return 1;
    }

    int i, maiorElement, tamVetor = QTD_ARGS - 1;
    int valores[tamVetor];

    //aqui pra facilitar tudo eu to colocando os valores inseridos pelos argumentos em um vetor
    for(i = 0 ; i < QTD_ARGS - 1 ; i++) {
        valores[i] = atoi(argv[i+1]);
    }

    //achando o maior deles com a função
    maiorElement = maiorInteiro(valores, tamVetor);

    //printando
    printf("O maior elemento passado eh: %d", maiorElement);

    return 0;
}