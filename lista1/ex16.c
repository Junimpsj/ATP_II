#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRANDMINUSCULA 122
#define MINRANDMINUSCULA 97

#define MAXRANDMAISCULA 90
#define MINRANDMAISCULA 65

int main() {

    srand(time(NULL));

    char vetor[10], *ptr;
    int i, contadorChar = 0, auxiliarMudanca;

    ptr = &vetor[0];

    //preenchendo o vetor com ponteiro
    //cara, aqui pra preencher essa porra eu tive a ideia de gerar um valor no intervalo das letras minusculas e maiusculas em ASCII
    //e ai eu coloco esse valor no vetor de char, que vai virar uma letra maiuscula ou uma letra minuscula (um caractere)
    //o problema é que o intervalo ASCII das maisculas e minusculas são separados, e a função rand() só aceita intervalo continuo
    //então tem uma função auxiliar que randozima 0 ou 1, e ai ele randomiza se vai usar o intervalo de minusculas ou de maiusculas
    //e ai boa
    for(i = 0 ; i < 10 ; i++) {
        auxiliarMudanca = rand() % 2;
        if(auxiliarMudanca == 0) {
            *ptr = rand() % (MAXRANDMAISCULA - MINRANDMAISCULA + 1) + MINRANDMAISCULA;
        }else {
            *ptr = rand() % (MAXRANDMINUSCULA - MINRANDMINUSCULA + 1) + MINRANDMINUSCULA;
        }
        ptr++;
    }

    //contando quantos elementos são letras maiusculas
    ptr = vetor;
    for(i = 0 ; i < 10; i++) {
        if(*ptr >= 65 && *ptr <= 90){
            contadorChar++;
        }
        ptr++;
    }

    //imprimindo o vetor com ponteiro
    ptr = vetor;
    printf("Vetor gerado: ");
    printf("[");

    for(i = 0 ; i < 10 ; i++) {
        printf("%c, ", *ptr);
        ptr++;
    }

    printf("]\n\n");

    printf("Sao [%d] letras maisculas\n", contadorChar);

    //printando as letras maisculas que aparecem
    ptr = vetor;
    printf("As letras maisculas que apareceram foram: ");
    printf("[");

    for(i = 0 ; i < 10 ; i++) {
        if(*ptr >= 65 && *ptr <= 90){
            printf("%c, ", *ptr);
        }
        ptr++;
    }

    printf("]");

    
    return 0;
}