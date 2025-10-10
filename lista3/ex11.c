#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef enum {segunda, terca, quarta, quinta, sexta} Dias;

int main() {

    const char *nomesDias[] = {"segunda", "terca", "quarta", "quinta", "sexta"};

    printf("Os valores do enum Dias sao: ");

    for(int i = segunda ; i <= sexta ; i++) {
        printf("%d, ", i);
    }

    printf("\n\nOu entao: ");

    for(int i = 0 ; i <= 5 ; i++) {
        printf("\nO valor %d corresponde ao dia: %s", i, nomesDias[i]);
    }

    return 0;
}