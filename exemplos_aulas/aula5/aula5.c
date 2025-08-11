//Nesse arquivo vou testar alguns códigos que eu achei necessário para entender melhor em relação a aula que está no título.
//Ex: Esse arquivo é o "aula5.c" então vamos ter códigos referentes a aula 5 e às anotação do aula5.md

#include <stdio.h>
#include <stdlib.h>

int troca(int *a, int *b);

int menor_elemento(int vetor[], int n, int primeiro);

int selection_sort(int vetor[], int n);

int posicao_elemento(int vetor[], int ultimo, int elemento);

void deslocar_subvetor(int vetor[], int primeiro, int ultimo);

int insertion_sort(int vetor[], int n);

int main() {

    //se quiser testar algum aqui, basta utilizar as funções

    return 0;
}

//algoritmos do selection_sort

int troca(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int menor_elemento(int vetor[], int n, int primeiro) {
    int i, menor = primeiro;

    for(i = primeiro + 1 ; i < n ; i++) {
        if(vetor[i] < vetor[menor]) {
            menor = i;
        }
    }
    return menor;
}

int selection_sort(int vetor[], int n) {
    int i, menor;

    for(i = 0 ; i < n ; i++) {
        menor = menor_elemento(vetor, n, i);
        trocar(&vetor[i], &vetor[menor]);
    }
}

//algoritmos do insertion sort

int posicao_elemento(int vetor[], int ultimo, int elemento) {

int i;

for (i = 0; i <= ultimo && vetor[i] <= elemento; i++);

return i;
}

void deslocar_subvetor(int vetor[], int primeiro, int ultimo) {

int i;

for (i = ultimo; i >= primeiro; i--) {
vetor[i+1] = vetor[i];
}

}

int insertion_sort(int vetor[], int n) {

int i, posicao;

int elemento;

for (i = 1; i < n; i++) {
elemento = vetor[i];
posicao = posicao_elemento(vetor, i-1, elemento);
deslocar_subvetor(vetor, posicao, i-1);
vetor[posicao] = elemento;
}

}