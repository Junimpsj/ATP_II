## **Anotações de Conteúdos Extras - ATP II**
OBS: alguns exercícios da Lista 01 precisam de conteúdo que eu não lembro muito bem, e os slides oferecidos para a disciplina não abordam: a biblioteca string.h, arrays de ponteiros e argc/argv.

Vou estudar essas partes e anotar os pontos principais por aqui.

### Biblioteca string.h
Em C, uma string é um vetor de char que termina com o caractere especial '\0' (nulo). A biblioteca <string.h> fornece várias funções prontas para manipular strings, tornando o código mais limpo e eficiente.

Facilita tarefas como: copiar, comparar, medir e concatenar strings. Evita ter que usar loops para toda análise de caracteres.

Funções importantes:
- strlen()
  - conta o tamanho da string
```
char nome[] = "Maria";
int tam = strlen(nome); // tam = 5

// obs: não conta o '\0'
```
- strcpy()
  - copia uma string para outra
```
char nome[20];
strcpy(nome, "Carlos"); // agora nome contém "Carlos"; também podemos copiar o conteúdo de outra string
```
- strcat()
  - concatena duas strings
```
char saudacao[50] = "Bom dia, ";
strcat(saudacao, "João!");
printf("%s\n", saudacao); // saída: Bom dia, João!
```
- strcmp()
  - compara duas strings
```
if (strcmp("abc", "abc") == 0) {
    printf("Iguais");
} else {
    printf("Diferentes");
}
```
- strcspn()
  - encontra o índice do primeiro caractere de uma string que também aparece em outra

OBS: como essas funções manipulam diretamente os vetores, precisamos garantir antes que os vetores de destino tenham capacidade suficiente para as operações.

### Arrays de ponteiros
Um array de ponteiros é um vetor em que cada elemento é um ponteiro. Na prática, isso é muito útil quando lidamos com várias strings:
```
char *nomes[] = {"Ana", "Bruno", "Carlos"};
```

Cada elemento de nomes é um ponteiro para a primeira letra de uma string.

Quando devemos utilizar?
- Quando queremos armazenar várias strings com tamanhos diferentes
- Quando os valores já estão definidos no código
- Quando usamos argv na função main()

Exemplo:
```
#include <stdio.h>

int main() {

    char *animais[] = {"Gato", "Cachorro", "Papagaio"};

    for (int i = 0; i < 3; i++) {
        printf("Animal %d: %s\n", i + 1, animais[i]);
    }

    return 0;
}
```

### Parâmetros argc e argv na main()
São argumentos de linha de comando que permitem passar informações para o programa na hora em que ele é executado.

A forma padrão da função main() é:
```
int main(int argc, char *argv[]) {
    // código
}
```

- argc: número de argumentos (inclusive o nome do programa)
- argv: vetor de strings (array de ponteiros) contendo os argumentos

Exemplo simples:
```
int main(int argc, char *argv[]) {
    printf("Foram passados %d argumentos. \n", argc);

    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    return 0;
}
```
Executando no terminal:
```
./meuprograma Maria 42
```

Saída:
```
Foram passados 3 argumentos.
argv[0]: ./meuprograma
argv[1]: Maria
argv[2]: 42
```

Aplicações reais:
- Passar nome de arquivos
- Passar parâmetros de configuração
- Criar scripts automatizados com entrada dinâmica