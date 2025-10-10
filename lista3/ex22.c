#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    int idade;
    char email[MAX_CHAR];
} Usuario;

int main() {

    Usuario *novoUsuario;
    novoUsuario = malloc(sizeof(Usuario)*3);

    //Usuarios cadastrados:

    strcpy((novoUsuario+0)->nome, "Carlos");
    (novoUsuario+0)->idade = 25;
    strcpy((novoUsuario+0)->email, "carlos@email.com");

    strcpy((novoUsuario+1)->nome, "Maria");
    (novoUsuario+1)->idade = 30;
    strcpy((novoUsuario+1)->email, "maria@email.com");

    strcpy((novoUsuario+2)->nome, "Joao");
    (novoUsuario+2)->idade = 28;
    strcpy((novoUsuario+2)->email, "joao@email.com");

    printf("======= Os usuarios cadastrados sao =======\n");
    for(int i = 0 ; i < 3 ; i++){
        printf("Usuario 0%d:\n Nome: %s\n Idade: %d\n Email: %s\n", i+1, (novoUsuario+i)->nome, (novoUsuario+i)->idade, (novoUsuario+i)->email);
        printf("\n");
    }

    free(novoUsuario);
    return 0;
}
