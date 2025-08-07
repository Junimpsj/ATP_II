//Nesse arquivo vou testar alguns códigos que eu achei necessário para entender melhor em relação a aula que está no título.
//Ex: Esse arquivo é o "aula4.c" então vamos ter códigos referentes a aula 4 e às anotação do aula4.md

#include <stdio.h>
#include <stdlib.h>

int fatorialExplicado(int n) {
    int x, y;

    // Caso base
    if (n == 0) {
    return 1;

    // Caso geral
    } else {
        // reduzimos o problema para instância menor x
        x = n - 1;
        y = fatorial(x);

        // combinamos o resultado y da instância menor
        return n * y;
    }
}

int fatorialOtimizado(int n) {
    if(n == 0 || n == 1){
        return 1;
    }
    
    return n * fatorialOtimizado(n -1);
}

int main() {

    return 0;
}