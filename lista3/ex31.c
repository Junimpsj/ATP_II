#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    int idade;
    char telefone[MAX_CHAR];
} Contato;

int main() {

    Contato *contato;
    contato = malloc(sizeof(Contato)*5);

    strcpy((contato+0)->nome, "Ana");
    (contato+0)->idade = 23;
    strcpy((contato+0)->telefone, "(11) 98765-4321");

    strcpy((contato+1)->nome, "Bruno");
    (contato+1)->idade = 27;
    strcpy((contato+1)->telefone, "(11) 91234-5678");

    strcpy((contato+2)->nome, "Carla");
    (contato+2)->idade = 31;
    strcpy((contato+2)->telefone, "(11) 99876-5432");

    strcpy((contato+3)->nome, "Diego");
    (contato+3)->idade = 29;
    strcpy((contato+3)->telefone, "(11) 93456-7890");

    strcpy((contato+4)->nome, "Elisa");
    (contato+4)->idade = 25;
    strcpy((contato+4)->telefone, "(11) 97654-3210");

    printf("======= Os contatos cadastrados sao =======\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("Contato 0%d:\n Nome: %s\n Idade: %d\n Telefone: %s\n", i+1, (contato+i)->nome, (contato+i)->idade, (contato+i)->telefone);
        printf("\n");
    }

    free(contato);
    return 0;
}
