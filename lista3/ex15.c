#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 80

typedef struct {
    char rua[MAX_CHAR];
    char bairro[MAX_CHAR];
    int numero;
    char cidade[MAX_CHAR];

} Endereco;

typedef struct {
    Endereco endereco;
    char dono[MAX_CHAR];
} Propriedade;

int main() {

    Propriedade *propriedade;


    propriedade = malloc(sizeof(Propriedade)*2);

    strcpy((propriedade)->dono, "Paulo");
    strcpy((propriedade+1)->dono, "Celso");

    strcpy(propriedade->endereco.rua, "Rua das Margaridas");
    strcpy(propriedade->endereco.bairro, "Pompeia");
    strcpy(propriedade->endereco.cidade, "Athenas");
    propriedade->endereco.numero = 777;

    strcpy((propriedade+1)->endereco.rua, propriedade->endereco.rua);
    strcpy((propriedade+1)->endereco.bairro, propriedade->endereco.bairro);
    strcpy((propriedade+1)->endereco.cidade, propriedade->endereco.cidade);
    (propriedade+1)->endereco.numero = propriedade->endereco.numero;

    printf("Tranferencia de propriedade completa!\n");
    printf("Transferido de:\nProprietario: %s\nEndereco: %s, n°%d, %s, %s\n\n", propriedade->dono, propriedade->endereco.rua, propriedade->endereco.numero, propriedade->endereco.bairro, propriedade->endereco.cidade);
    printf("Para:\nProprietario: %s\nEndereco: %s, n°%d, %s, %s\n", (propriedade+1)->dono, (propriedade+1)->endereco.rua, (propriedade+1)->endereco.numero, (propriedade+1)->endereco.bairro, (propriedade+1)->endereco.cidade);

    

    free(propriedade);
    return 0;
}