#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {

    char marca[MAX_CHAR];
    char modelo[MAX_CHAR];
    int ano;

} Carro;

int main() {
   
    Carro novoCarro;

    strcpy(novoCarro.marca, "Mitsubishi");
    strcpy(novoCarro.modelo, "Eclipse");
    novoCarro.ano = 1998;

    printf("Informacoes do Carro:\n");
    printf("Marca: %s\n", novoCarro.marca);
    printf("Modelo: %s\n", novoCarro.modelo);
    printf("Ano: %d\n", novoCarro.ano);

    return 0;
}