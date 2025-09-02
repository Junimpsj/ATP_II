#include <stdio.h>
#include <stdlib.h>

int ocorrencias(int *vetor, int n, int x);

int main() {
    int n, x, i, *vetor;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);

    vetor = malloc(sizeof(int)*n);

    for(i = 0; i < n; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Qual elemento deseja contar? ");
    scanf("%d", &x);

    printf("O elemento %d ocorre [%d] vezes\n", x, ocorrencias(vetor, n, x));

    free(vetor);

    return 0;
}

int ocorrencias(int *vetor, int n, int x) {

    if(n == 0) return 0;
    return (vetor[n-1] == x) + ocorrencias(vetor, n-1, x);
    
}
