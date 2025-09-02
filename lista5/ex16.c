#include <stdio.h>
#include <stdlib.h>

int ackermann(int m, int n);

int main() {

    int m, n;

    printf("Digite m e n: ");
    scanf("%d %d", &m, &n);

    printf("Ackermann(%d, %d) = [%d]", m, n, ackermann(m, n));

    return 0;
}

//vamos tomar cuidado com vetores grandes pq a função cresce mt rápido
int ackermann(int m, int n) {

    if(m == 0) return n+1;
    if(n == 0) return ackermann(m-1, 1);
    return ackermann(m-1, ackermann(m, n-1));

}
