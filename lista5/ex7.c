#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente);

int main() {

    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("%d elevado a %d eh [%d]", base, expoente, potencia(base, expoente));

    return 0;
}

int potencia(int base, int expoente) {

    if(expoente == 0) return 1;
    return base * potencia(base, expoente - 1);
    
}
