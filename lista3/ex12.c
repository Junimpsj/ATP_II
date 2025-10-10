#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 60

typedef struct {
    char nome[MAX_CHAR];
    int ra;
    int idade;
    float nota;
} Aluno;

void cadastrarAluno(Aluno *aluno, int qtdAlunos);

int main() {

    int qtdAlunos;

    printf("Quando alunos desja cadastrar no sistemas? ");
    scanf("%d", &qtdAlunos);
    if(qtdAlunos < 1 || qtdAlunos > 100) {
        printf("Vamo com calma amigao! Entre 1 e 100 alunos apenas!");
        return 1;
    }

    Aluno *aluno = malloc(sizeof(Aluno)*qtdAlunos);

    printf("============ CADASTRANDO ALUNOS ============\n");

    for(int i = 0 ; i < qtdAlunos ; i++) {
        printf("Insira o nome do %d° aluno: ", i+1);
        scanf("%s", (aluno + i)->nome);
        printf("Insira o RA do %d° aluno: ", i+1);
        scanf("%d", &(aluno + i)->ra);
        printf("Insira a idade do %d° aluno: ", i+1);
        scanf("%d", &(aluno + i)->idade);
        printf("Insira a nota do %d° aluno: ", i+1);
        scanf("%f", &(aluno + i)->nota);

        printf("---------------------------------\n");
    }

    printf("\nTodos os alunos cadastrados com sucesso! Confira:\n");

    for(int i = 0 ; i < qtdAlunos ; i++) {
        printf("%d° Aluno: %s, %d, %d, %f\n", i+1, (aluno + i)->nome, (aluno + i)->ra, (aluno + i)->idade, (aluno + i)->nota);
    }

    free(aluno);
    return 0;
}