#include <stdio.h>
#include <stdlib.h>

int raizQuadrada(int n, int baixo, int alto);

int main() {

    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("Raiz quadrada inteira de %d eh [%d]", n, raizQuadrada(n, 0, n));
    
    return 0;
}


int raizQuadrada(int n, int baixo, int alto) {

    if(baixo > alto) return alto;
    int meio = (baixo + alto) / 2;
    if(meio * meio == n) return meio;
    if(meio * meio < n) return raizQuadrada(n, meio + 1, alto);
    return raizQuadrada(n, baixo, meio - 1);

}
