//Nesse arquivo vou testar alguns códigos que eu achei necessário para entender melhor em relação a aula que está no título.
//Ex: Esse arquivo é o "aula2.c" então vamos ter códigos referentes a aula 2 e às anotação do aula2.md

#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b) {
    return a + b;
}

int main() {

    int c, d;

    printf("Digite o valor de C: ");
    scanf("%d", &c);
    printf("Digite o valor de D: ");
    scanf("%d", &d);
    
    printf("Soma de c e d: %d \n", soma(c,d));
    printf("Soma de 5 e 10: %d", soma(5,10));

    return 0;
}