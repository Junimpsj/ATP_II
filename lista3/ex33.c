#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef union {
    float salario;
    int horas;
} Pagamento;

int main() {

    Pagamento pag;

    pag.salario = 2500.50;
    printf("Pagamento (salario): R$%.2f\n", pag.salario);

    pag.horas = 160;
    printf("Pagamento (horas): %d horas\n", pag.horas);

    return 0;
}
