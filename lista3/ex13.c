#include <stdio.h>
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    float salario;
    char departamento[MAX_CHAR];
} Funcionario;

int main() {

    Funcionario *funcionario;

    strcpy(funcionario->nome, "Aldemir");
    funcionario->salario = 2300;
    strcpy(funcionario->departamento, "Financas");

    printf("Dados do Funcionario:\n");
    printf("Nome: %s\n", funcionario->nome);
    printf("Salario: R$%.2f\n", funcionario->salario);
    printf("Departamento: %s\n", funcionario->departamento);

    return 0;
}