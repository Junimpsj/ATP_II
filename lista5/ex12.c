#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int n, int d);

void imprimePrimos(int n);

int main() {

    int n;

    printf("Digite N: ");
    scanf("%d", &n);

    printf("Primos ate %d: ", n);

    imprimePrimos(n);

    printf("\n");

    return 0;
}

int ehPrimo(int n, int d) {

    if(n < 2) return 0;
    if(d * d > n) return 1;
    if(n % d == 0) return 0;
    return ehPrimo(n, d+1);

}

void imprimePrimos(int n) {

    if(n < 2) return;
    imprimePrimos(n-1);
    if(ehPrimo(n, 2)) printf("%d ", n);
    
}
