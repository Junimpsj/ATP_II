#include <stdio.h>
#include <stdlib.h>

int somaDigitos(int n);

int main() {

    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("A soma dos digitos de %d eh [%d]", n, somaDigitos(n));

    return 0;
}

int somaDigitos(int n) {

    if(n == 0) return 0;
    return (n % 10) + somaDigitos(n / 10);
    
}
