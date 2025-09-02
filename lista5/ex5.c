#include <stdio.h>
#include <stdlib.h>

int ehPrimo (int num, int divisor);

int main() {

    int num;

    printf("Digite um numero natural qualquer: ");
    scanf("%d", &num);

    if(num < 0){
        printf("Apenas numero naturais!");
        return 0;
    }

    if(!ehPrimo(num, 2)){
        printf("o numero %d nao eh primo!", num);
    } else{
        printf("o numero %d eh primo!", num);
    }

    return 0;
}

int ehPrimo(int num, int divisor) {

    if(num < 2) return 0;
    if(divisor * divisor > num) return 1;
    if(num % divisor == 0) return 0;
    return ehPrimo(num, divisor + 2);

}