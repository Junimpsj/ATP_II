#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    int idade;
    char raca[MAX_CHAR];
} Animal;

int main() {

    Animal novoAnimal;

    strcpy(novoAnimal.nome, "Rex");
    novoAnimal.idade = 5;
    strcpy(novoAnimal.raca, "Labrador");

    printf("Informacoes do Animal:\n");
    printf("Nome: %s\n", novoAnimal.nome);
    printf("Idade: %d anos\n", novoAnimal.idade);
    printf("Raca: %s\n", novoAnimal.raca);

    return 0;
}
