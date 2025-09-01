#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 5
#define COLUNAS 5
#define MAXRAND 1
#define MINRAND 0

void preencherMatrizRandom(int matriz[LINHAS][COLUNAS]);

void imprimirMatriz(int matriz[LINHAS][COLUNAS]);

void proximaGeracao(int matriz[LINHAS][COLUNAS], int nova[LINHAS][COLUNAS]);

int contarVizinhos(int matriz[LINHAS][COLUNAS], int x, int y);

int main() {

    int matriz[LINHAS][COLUNAS], nova[LINHAS][COLUNAS];
    
    int geracoes = 10, g;

    preencherMatrizRandom(matriz);

    for(g = 0; g < geracoes; g++) {
        printf("Geracao %d:\n", g+1);
        imprimirMatriz(matriz);
        proximaGeracao(matriz, nova);

        //copiamos a nova geração pra matriz atual
        for(int i = 0; i < LINHAS; i++)
            for(int j = 0; j < COLUNAS; j++)
                matriz[i][j] = nova[i][j];

        printf("\n");
    }
    return 0;
}

void preencherMatrizRandom(int matriz[LINHAS][COLUNAS]) {

    srand(time(NULL));
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % 2; //usei o dois aqui pq só quero 0 ou 1 nos preenchimentos
        }
    }

}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++)
            printf("%3d", matriz[i][j]);
        printf("\n");
    }

}

int contarVizinhos(int matriz[LINHAS][COLUNAS], int x, int y) {

    int count = 0;

    for(int i = x-1; i <= x+1; i++) {
        for(int j = y-1; j <= y+1; j++) {
            if(i == x && j == y) continue;
            if(i >= 0 && i < LINHAS && j >= 0 && j < COLUNAS)
                count += matriz[i][j];
        }
    }
    return count;

}

void proximaGeracao(int matriz[LINHAS][COLUNAS], int nova[LINHAS][COLUNAS]) {

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            int vizinhos = contarVizinhos(matriz, i, j);
            if(matriz[i][j] == 1) {
                if(vizinhos < 2 || vizinhos > 3)
                    nova[i][j] = 0;
                else
                    nova[i][j] = 1;
            } else {
                if(vizinhos == 3)
                    nova[i][j] = 1;
                else
                    nova[i][j] = 0;
            }
        }
    }

}