#include <stdio.h>
#include <stdlib.h>

void imprimeInverso(int *vetor, int n);

int main() {

    int n, i, *vetor;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);

    vetor = malloc(sizeof(int)*n);

    for(i = 0; i < n; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor inverso: [");
    imprimeInverso(vetor, n);
    printf("]\n");

    free(vetor);

    return 0;
}

void imprimeInverso(int *vetor, int n) {

    if(n == 0) return;
    printf("%d", vetor[n-1]);
    
    if(n > 1) printf(", ");
    imprimeInverso(vetor, n-1);

}
