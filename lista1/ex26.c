#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char texto1[100], texto2[100], concat[200];

    printf("Digite a primeira String: ");
    fgets(texto1, sizeof(texto1), stdin);
    texto1[strcspn(texto1, "\n")] = '\0';

    printf("Digite a segunda String: ");
    fgets(texto2, sizeof(texto2), stdin);
    texto1[strcspn(texto2, "\n")] = '\0';

    strcpy(concat, texto1);
    strcat(concat, texto2);

    printf("Concatenacao: %s", concat);

    return 0;
}