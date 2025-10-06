//Nesse arquivo vou testar alguns códigos que eu achei necessário para entender melhor em relação a aula que está no título.
//Ex: Esse arquivo é o "aula9.c" então vamos ter códigos referentes a aula 9 e às anotação do aula9.md

#include <stdio.h>
#include <stdlib.h>

#define NUM_ALUNOS 5

struct ficha_notas {
    int ra;
    float p1, p2;
};

int main() {

    struct ficha_notas notas[NUM_ALUNOS];
    
    float soma = 0;

    int i;

    for(i = 0 ; i < NUM_ALUNOS ; i++) {
        printf("Digite o RA: ");
        scanf("%d", &notas[i].ra);

        printf("Nota p1: ");
        scanf("%f", &notas[i].p1);

        printf("nota p2: ");
        scanf("%f", &notas[i].p2);
    }

    for(i = 0 ; i < NUM_ALUNOS ; i++) {
        soma += notas[i].p1 + notas[i].p2;
    }

    printf("Media das notas: %f \n", soma / NUM_ALUNOS);

    return 0;
}