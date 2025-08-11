//Nesse arquivo vou testar alguns códigos que eu achei necessário para entender melhor em relação a aula que está no título.
//Ex: Esse arquivo é o "aula4.5.c" então vamos ter códigos referentes a aula 4.5 e às anotação do aula4.5.md

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ponteiro;
    
    //nesse exemplo abaixo estamos criando uma variável totalmente dinâmica
    //criamos um ponteiro que de inicio não aponta pra lugar nenhum, nem contém nada
    //mas deixamos bem claro que ele tem reservado o exato espaço pra receber um inteiro
    //então ele reservou ALGUM espaço na memória que não sabemos aonde, mas ele aponta pra esse espaço
    //e esse espaço pode receber um inteiro, coisa que fazemos atribuindo o numero 13

    ponteiro = malloc(sizeof(int));
    if(ponteiro == NULL) {
        printf("Não há mais memória!\n");
        exit(0);
    }

    *ponteiro = 13;
    printf("Endereco %p com valor %d. \n", ponteiro, *ponteiro);

    free(ponteiro);

    return 0;
}