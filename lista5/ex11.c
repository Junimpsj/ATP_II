#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b);

int mdcArray(int *vetor, int n);

int main() {

    int n, i, *vetor;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);

    vetor = malloc(sizeof(int)*n);

    for(i = 0; i < n; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("O maior divisor comum do vetor eh [%d]", mdcArray(vetor, n));

    free(vetor);

    return 0;
}

int mdc(int a, int b) {

    if(b == 0) return a;
    return mdc(b, a % b);

}

int mdcArray(int *vetor, int n) {

    if(n == 1) return vetor[0];
    return mdc(vetor[n-1], mdcArray(vetor, n-1));
    
}
