//Nesse arquivo vou testar alguns códigos que eu achei necessário para entender melhor em relação a aula que está no título.
//Ex: Esse arquivo é o "aula3.c" então vamos ter códigos referentes a aula 3 e às anotação do aula3.md

#include <stdio.h>
#include <stdlib.h>

int floatSoma(float a, float b);

int obter_quadrado(int x) { //função que recebe passagem por valor
    return x * x;
}

void calcular_quadrado(int x, int *quadrado) { //função que recebe passagem por referência
    *quadrado = x * x;
}

int main() {
    
    int x = 2, quadrado;

    //floatSoma(7.5,12.3);
    //printf("Quadrado de %d eh %d\n", 3, obter_quadrado(3)); //passagem por valor

    //calcular_quadrado(x, &quadrado);
    //printf("Quadrado de %d eh %d\n", x, quadrado);


    return 0;
}

int floatSoma(float a, float b) {
    return a + b;
}