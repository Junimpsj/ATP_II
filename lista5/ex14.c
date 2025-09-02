#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ehPalindromo(char *str, int ini, int fim);

int main() {
    char str[100];

    printf("Digite uma palavra: ");
    scanf("%s", str);

    if(ehPalindromo(str, 0, strlen(str)-1))
        printf("Eh palindromo!\n");
    else
        printf("Nao eh palindromo!\n");
        
    return 0;
}

int ehPalindromo(char *str, int ini, int fim) {

    if(ini >= fim) return 1;
    if(str[ini] != str[fim]) return 0;
    return ehPalindromo(str, ini+1, fim-1);

}
