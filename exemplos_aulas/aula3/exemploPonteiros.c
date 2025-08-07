#include <stdio.h>
#include <stdlib.h>

int main() {

    int variavel;
    int *ponteiro1, *ponteiro2;

    variavel = 3;

    printf("\n");
    printf("Aqui atribuimos valor na variavel [%d]\n", variavel);
    printf("<--------------------------------------------------------------------------------->\n\n\n");

    ponteiro1 = &variavel;

    printf("Aqui declaramos (ponteiro1 = &variavel)\n");
    printf("variavel = [%d]\n", variavel);
    printf("ponteiro1 = [%d]\n", *ponteiro1);
    printf("<--------------------------------------------------------------------------------->\n\n\n");

    ponteiro2 = ponteiro1;

    printf("Aqui declaramos (ponteiro12 = ponteiro1)\n");
    printf("variavel = [%d]\n", variavel);
    printf("ponteiro1 = [%d]\n", *ponteiro1);
    printf("ponteiro2 = [%d]\n", *ponteiro2);
    printf("<--------------------------------------------------------------------------------->\n\n\n");

    *ponteiro2 = 5;

    printf("Aqui declaramos (*ponteiro2 = 5)\n");
    printf("%d, %d, %d", variavel, *ponteiro1, *ponteiro2);

    return 0;
}