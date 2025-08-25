#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {

    char texto[100];
    int i, tamanho;
    bool palindromo = true;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = '\0';

    tamanho = strlen(texto);

    for(i = 0 ; i < tamanho / 2; i++) {
        if(texto[i] != texto[tamanho - 1 - i]) {
            palindromo = false;
            break;
        }
    }

    if(palindromo == true){
        printf("A string eh palindromo");
    }else {
        printf("A string nao eh palindromo");
    }

    return 0;
}