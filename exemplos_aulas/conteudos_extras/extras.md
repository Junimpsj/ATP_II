## **Anotações de Conteúdos Extras - ATP II**
OBS: Alguns exercícios da lista 01 precisam de um conteúdo que eu não lembro muito bem e os slides oferecidos para a disciplina não abordam que são: biblioteca String.h, arrays de ponteiros e argc/argv. 

Então vou estudar a parte e anotar por aqui.

### **Biblioteca String.h**
Em C, uma string é um vetor de char que termina com o caractere especial \0 (nulo). A biblioteca <String.h> fornece várias funções prontas para manipular essas strings, tornando o código mais limpo e eficiente.

Facilita tarefas como: copiar, comprar, medir e concatenar strings. Evita ter que ficar usando FOR pra toda analise de 
    
**Funções Importantes:**  
- **strlen()**  
. conta o tamanho da string
```
char nome[] = "Maria";
int tam = strlen(nome); //tm = 5

//obs: não conta o \0
```
- **strcpy()**  
. copia uma string para outra
```
char nome[20];
strcpy(nome, "Carlos"); // agora nome contém Carlos, mas podemos usar tbm o conteúdo de outra strig
```
- **strcat()**  
. concatena duas string (junta elas)
```
char saudacao[50] = "Bom dia, ";
strcat(saudacao, "João!");
printf("%s\n", saudacao); // a saída vai ser: Bom dia, João!
```
- **strcmp()**  
. compara duas strings
```
if(strcmp("abc", "abc") == 0) {
    printf("Iguais");
}else {
    printf("Diferentes");
}
```
- **strcspn()**
. encontra o índice do primeiro caractere de uma string que também aparece outra

OBS: Como essas funções manipular diretamente os vetores, precisamos garantir antes que o os vetores de destino tenham capacidade suficiente para as operações.

### **Arrays de Ponteiro**
Um array de ponteiro é um vetor onde cada elemento é um ponteiro. Na prática, isso é muito útil quando lidamos com várias Strings:
```
char *nomes[] = {"Ana", "Bruno", "Carlos"};
```

Cada elemento de nomes é um ponteiro para a primeira letra de uma string.  
(Acho que podemos aplicar esse mesmo conceito em matrizes...)

**Quando devemos utilizar?**
- Quando queremos armazenar várias strings com tamanhos diferentes
- Quando os valores já estão definidos no código
- Quando usamos argv da função main()

Exemplo:
```
#include <stdio.h>

int main() {

    char *animais[] = {"Gato", "Cachoro", "Papagaio"};

    for(int i = 0 ; i < 3 ; i++) {
        printf("Animal %d: %s\n", i+1, animais[i]);
    }

    return 0;
}
```

### **Parâmetros ARGC e ARGV na Main()**
São argumentos de linha de comando que permitem passar informações para o programa na hora que ele é executado.

A forma padrão da função main() é:
```
int main(int argc, char *argv[]) {
    //código
}
```

- **argc**: número de argumentos (inclusive o nome do programa)
- **argv**: vetor de strings (array de ponteiros) contendo argumentos

Exemplo simples:
```
int main(int argc, char *argv[]) {
    printf("Foram passados %d argumentos. \n", argc);

    for (int i = 0 ; i < argc ; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    return 0;
}
```
Executando no terminal: 
```
$ ./meuprograma Maria 42
```

Saída:
```
Foram passados 3 argumentos.
argv[0]: ./meuprograma
argv[1]: Maria
argv[2]: 42
```

**Aplicações Reais**
- Passar nome de arquivos
- Passar parâmetros de cofiguração
- Criar scripts automatizados com entrada dinâmica