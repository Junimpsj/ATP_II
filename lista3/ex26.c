#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    int idade;
    float altura;
} Pessoa;

int main() {

    int qtdPessoas;

    printf("Quantas pessoas deseja cadastrar? ");
    scanf("%d", &qtdPessoas);
    if(qtdPessoas < 1 || qtdPessoas > 100) {
        printf("Vamo com calma amigao! Entre 1 e 100 pessoas apenas!");
        return 1;
    }

    Pessoa *pessoa = malloc(sizeof(Pessoa)*qtdPessoas);

    printf("============ CADASTRANDO PESSOAS ============\n");

    for(int i = 0 ; i < qtdPessoas ; i++) {
        printf("Insira o nome da %d° pessoa: ", i+1);
        scanf("%s", (pessoa + i)->nome);
        printf("Insira a idade da %d° pessoa: ", i+1);
        scanf("%d", &(pessoa + i)->idade);
        printf("Insira a altura da %d° pessoa (em metros): ", i+1);
        scanf("%f", &(pessoa + i)->altura);

        printf("---------------------------------\n");
    }

    printf("\nTodas as pessoas cadastradas com sucesso! Confira:\n");

    for(int i = 0 ; i < qtdPessoas ; i++) {
        printf("%d° Pessoa: %s, %d anos, %.2fm\n", i+1, (pessoa + i)->nome, (pessoa + i)->idade, (pessoa + i)->altura);
    }

    free(pessoa);
    return 0;
}
