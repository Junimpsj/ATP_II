//Nesse arquivo vou testar alguns códigos que eu achei necessário para entender melhor em relação a aula que está no título.
//Ex: Esse arquivo é o "aula1.c" então vamos ter códigos referentes a aula 1 e às anotação do aula1.md

#include <stdio.h>
#include <stdlib.h>

void lerNomeChar() {

    char nome[30], caractere;
    int i = 0;

    do{

        printf("Digite o proximo caractere: ");
        scanf("%c", &caractere);
        nome[i] = caractere;
        i++;

    }while(caractere != '-');

    printf("O nome digitado foi: \n");
    for(int j = 0 ; j < (i-1) ; j++) {
        printf("%c", nome[j]);
    }

}

void lerNomeString() {

}

int main() {

    lerNomeChar();
    lerNomeString();

    return 0;
}