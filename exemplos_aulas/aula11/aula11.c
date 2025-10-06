//Nesse arquivo vou testar alguns códigos que eu achei necessário para entender melhor em relação a aula que está no título.
//Ex: Esse arquivo é o "aula11.c" então vamos ter códigos referentes a aula 11 e às anotação do aula11.md

typedef struct ficha_aluno {
    int ra;
    char nome[50];
    int telefone;
} ficha_aluno;

#include <stdio.h>
#include <stdlib.h>

int main() {

    struct ficha_aluno aluno;

    FILE *arq;
    arq = fopen("dados_aluno.txt", "w");
    //arq = fopen("dados_aluno.txt", "r");

    scanf("%d", &aluno.ra);
    scanf("%s", aluno.nome);
    scanf("%d", &aluno.telefone);

    fprintf(arq, "%d\n", aluno.ra);
    fprintf(arq, "%s\n", aluno.nome);
    fprintf(arq, "%d\n", aluno.telefone);

    //fscanf(arq, "%d", &aluno.ra);
    //fscanf(arq, "%s", aluno.nome);
    //fscanf(arq, "%d", &aluno.telefone);

    //printf("%d\n", aluno.ra);
    //printf("%s\n", aluno.nome);
    //printf("%d\n", aluno.telefone);

    fclose(arq);

    return 0;
}