#include <stdio.h>
#include <stdlib.h>

int fatorial(int num);

int main() {

    int num, result;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("amigao, nao existe fatorail de negativo!");
    }else {
        printf("o fatorial de %d eh [%d]", num, fatorial(num));
    }

    return 0;
}

int fatorial(int num) {

    if(num == 0 || num == 1) {
        return 1;
    }

    return num * fatorial (num - 1);
    
}