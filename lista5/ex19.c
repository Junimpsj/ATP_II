#include <stdio.h>
#include <stdlib.h>

int binomial(int n, int k);

int main() {

    int n, k;

    printf("Digite n e k: ");
    scanf("%d %d", &n, &k);

    printf("C(%d, %d) = [%d]", n, k, binomial(n, k));
    
    return 0;
}

int binomial(int n, int k) {

    if(k == 0 || k == n) return 1;
    return binomial(n-1, k-1) + binomial(n-1, k);

}
