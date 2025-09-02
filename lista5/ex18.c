#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char origem, char destino, char auxiliar);

int main() {

    int n;

    printf("Digite o numero de discos: ");
    scanf("%d", &n);

    printf("Movimentos para resolver a Torre de Hanoi:\n");

    hanoi(n, 'A', 'C', 'B');

    return 0;
}


void hanoi(int n, char origem, char destino, char auxiliar) {

    if(n == 0) return;
    hanoi(n-1, origem, auxiliar, destino);
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    hanoi(n-1, auxiliar, destino, origem);

}

//Esse exercício não é facil não chefe, tive que recorrer a ajuda dos universitários