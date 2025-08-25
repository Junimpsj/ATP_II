#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    //tratamento de erros**
    if(argc != 2) {
        printf("Quantidade de parametros errada, no máximo 1!");
        return 1;
    }

    int num1 = atoi(argv[1]);

    if(num1%2 == 0) {
        printf("O numero eh par!");
    } else {
        printf("O numero eh impar!");
    }

    return 0;
}