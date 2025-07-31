#include <stdio.h>

int main(){

    int vetor[10], soma, i;

    printf("Digite dez valores inteiros:\n");
    
    //lendo os valores
    for(i = 0 ; i < 10 ; i++) {
        printf("[%d]: ",i);
        scanf("%d", &vetor[i]);
    }

    //somando os valores
    for(i = 0 ; i < 10 ; i++) {
        soma = soma + vetor[i];
    }

    //mostrando o resultado
    printf("Soma dos elementos: [%d]", soma);

    return 0;
}