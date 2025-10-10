#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char modelo[MAX_CHAR];
    int ano;
    float preco;
} Veiculo;

int main() {

    int qtdVeiculos;

    printf("Quantos veiculos deseja cadastrar? ");
    scanf("%d", &qtdVeiculos);
    if(qtdVeiculos < 1 || qtdVeiculos > 100) {
        printf("Vamo com calma amigao! Entre 1 e 100 veiculos apenas!");
        return 1;
    }

    Veiculo *veiculo = malloc(sizeof(Veiculo)*qtdVeiculos);

    printf("============ CADASTRANDO VEICULOS ============\n");

    for(int i = 0 ; i < qtdVeiculos ; i++) {
        printf("Insira o modelo do %d° veiculo: ", i+1);
        scanf("%s", (veiculo + i)->modelo);
        printf("Insira o ano do %d° veiculo: ", i+1);
        scanf("%d", &(veiculo + i)->ano);
        printf("Insira o preco do %d° veiculo: ", i+1);
        scanf("%f", &(veiculo + i)->preco);

        printf("---------------------------------\n");
    }

    printf("\nTodos os veiculos cadastrados com sucesso! Confira:\n");

    for(int i = 0 ; i < qtdVeiculos ; i++) {
        printf("%d° Veiculo: %s, %d, R$%.2f\n", i+1, (veiculo + i)->modelo, (veiculo + i)->ano, (veiculo + i)->preco);
    }

    free(veiculo);
    return 0;
}
