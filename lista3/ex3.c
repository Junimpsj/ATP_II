#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {

    char marca[MAX_CHAR];
    char modelo[MAX_CHAR];
    int ano;
    char documento[4];
    char proprietario[MAX_CHAR];

} Carro;

void transferirCarro(Carro meuCarro, Carro *transferidoCarro);

int main() {

    Carro meuCarro, transferidoCarro;

    printf("Insira as informacoes do seu carro para transferir:\n");

    printf("Marca do Carro: ");
    scanf("%s", meuCarro.marca);

    printf("Modelo do Carro: ");
    scanf("%s", meuCarro.modelo);
    
    printf("Ano do Carro: ");
    scanf("%d", &meuCarro.ano);

    printf("Documentacao em Dia? (Sim ou Nao): ");
    scanf("%s", meuCarro.documento);
    if(strlen(meuCarro.documento) > 4) {
        printf("Opa, algo deu errado! Aceitamos apenas Sim e Nao aqui!");
        return 1;
    }

    printf("Seu nome: ");
    scanf("%s", meuCarro.proprietario);

    printf("Para quem deseja transferir? ");
    scanf("%s", transferidoCarro.proprietario);

    transferirCarro(meuCarro, &transferidoCarro);

    printf("\nPerfeito, carro transferido! Confira abaixo:\n");
    printf("Informacoes do Carro: %s, %s, %d, %s\n", transferidoCarro.marca, transferidoCarro.modelo, transferidoCarro.ano, transferidoCarro.documento);
    printf("Transferido de %s -> %s", meuCarro.proprietario, transferidoCarro.proprietario);

    return 0;
}

void transferirCarro(Carro meuCarro, Carro *transferidoCarro) {

    strcpy(transferidoCarro->marca, meuCarro.marca);
    strcpy(transferidoCarro->modelo, meuCarro.modelo);
    strcpy(transferidoCarro->documento, meuCarro.documento);
    transferidoCarro->ano = meuCarro.ano;

}