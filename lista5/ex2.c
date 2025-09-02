#include <stdio.h>
#include <stdlib.h>

int somaNaturais(int num);

int main() {

    int num;

    printf("Insira um numero natual: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Apenas numeros naturais (maior que zero)!");
    } else {
        printf("A soma dos primeiros %d numeros naturais eh [%d]", num, somaNaturais(num));
    }

    return 0;
}

int somaNaturais(int num) {

    if(num == 0) { return 0; } 
    if(num == 1) { return 1; }
    else {return num + somaNaturais(num - 1);}

}