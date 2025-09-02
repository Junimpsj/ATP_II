#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverterString(char *str, int n);

int main() {

    char str[100];

    printf("Digite uma string: ");
    scanf("%s", str);

    printf("String invertida: ");

    inverterString(str, strlen(str));
    printf("\n");

    return 0;
}

void inverterString(char *str, int n) {

    if(n == 0) return;
    printf("%c", str[n-1]);
    inverterString(str, n-1);
    
}
