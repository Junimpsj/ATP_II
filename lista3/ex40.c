#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    char cargo[MAX_CHAR];
    float salario;
} Empregado;

int main() {

    Empregado *empregado;
    empregado = malloc(sizeof(Empregado)*5);

    strcpy((empregado+0)->nome, "Fernanda");
    strcpy((empregado+0)->cargo, "Gerente");
    (empregado+0)->salario = 5000.00;

    strcpy((empregado+1)->nome, "Gabriel");
    strcpy((empregado+1)->cargo, "Analista");
    (empregado+1)->salario = 3500.00;

    strcpy((empregado+2)->nome, "Helena");
    strcpy((empregado+2)->cargo, "Assistente");
    (empregado+2)->salario = 2000.00;

    strcpy((empregado+3)->nome, "Igor");
    strcpy((empregado+3)->cargo, "Desenvolvedor");
    (empregado+3)->salario = 4500.00;

    strcpy((empregado+4)->nome, "Julia");
    strcpy((empregado+4)->cargo, "Designer");
    (empregado+4)->salario = 3000.00;

    printf("======= Os empregados cadastrados sao =======\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("Empregado 0%d:\n Nome: %s\n Cargo: %s\n Salario: R$%.2f\n", i+1, (empregado+i)->nome, (empregado+i)->cargo, (empregado+i)->salario);
        printf("\n");
    }

    free(empregado);
    return 0;
}
