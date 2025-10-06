#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b);

int main() {

    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("O MDC de %d e %d eh [%d]", a, b, mdc(a, b));

    return 0;
}

int mdc(int a, int b) {

    if(b == 0) return a;
    return mdc(b, a % b);
    
}