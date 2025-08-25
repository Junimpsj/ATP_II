#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char texto[500];
    int i, qtdChars, qtdWords = 0, qtdStrings = 0; // eu inicio a qtd de linhas como um porque de qlqr jeito, obrigatóriamente temos uma linha

    // lendo a string do usuário
    printf("Seja criativo no texto a seguir:\n");
    fgets(texto, sizeof(texto), stdin);

    // contando os caracteres
    qtdChars = strlen(texto);

    //contando a qtd de linhas (to fazendo primeiro pq a lógica é mais fácil)
    for(i = 0 ; i < qtdChars ; i++) {
        if(texto[i] == '\n'){
            qtdStrings++;
        }
    }

    //contando a qtd de palavras (a lógica mais chata aqui)
    for(i = 0 ; i < qtdChars ; i++) {
        if((i == 0 && texto[i] !=  ' ' && texto[i] != '\n')
            || (texto[i] != ' ' && texto[i] != '\n' &&
            (texto[i-1] == ' ' || texto[i-1] == '\n'))) {
                qtdWords++;
            }
    }

    printf("\nCaracteres: [%d]\nPalavras: [%d]\nLinhas: [%d]", qtdChars-1, qtdWords, qtdStrings); //tem um -1 na qtdChars pq ele tava lendo o enter do teclado então eu to tirando ele

    return 0;
}
