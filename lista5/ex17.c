#include <stdio.h>
#include <stdlib.h>

int caminhos(int n, int m);

int main() {
    int n;

    printf("Digite o tamanho da grade NxN: ");
    scanf("%d", &n);

    printf("Numero de caminhos possiveis: [%d]", caminhos(n, n));

    return 0;
}

int caminhos(int n, int m) {

    if(n == 1 || m == 1) return 1;
    return caminhos(n-1, m) + caminhos(n, m-1);

}
