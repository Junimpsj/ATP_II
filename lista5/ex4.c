#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num);

int main() {

    int num;

    printf("Digite um numero natural: ");
    scanf("%d", &num);

    printf("A sequencia de fibonacci do e-nesimo termo eh [%d]", fibonacci(num));


    return 0;
}

int fibonacci(int num) {

    if(num == 0) {return 0;}
    if(num == 1) {return 1;}
    else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }

}