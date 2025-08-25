#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char texto[100], charEscolha, charSub;
    int i;

    printf("Insira a string: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    printf("Qual caractere voce quer substituir?\n");
    scanf(" %c", &charEscolha);

    printf("E vai substituir por qual?\n");
    scanf(" %c", &charSub);

    for(i = 0 ; texto[i] != '\0' ; i++) {
        if(texto[i] == charEscolha) {
            texto[i] = charSub;
        }
    }

    printf("A string final:\n%s", texto);

    return 0;
} 