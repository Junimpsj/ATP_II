## Anotações Aula 01 - ATPII

### **Vetor - Definição**  
Vetor é uma coleção de variáveis de um mesmo tipo referenciada por um nome comum.

. Acessado por meio de um índice;  
. O tamanho máximo da coleção de elementos N é pré-definido;

#### **Declarando um vetor:**

```
<tipo> identificador[N];
```

Exemplos: float notas[100]; | int medias[100]; | char nome[200];  

#### **Acessando variável em uma posição do vetor:**

```
a = vetor[i];
```
A posição "i" pode ser qualquer valor inteiros, podemos usar constantes ou variáveis também.

- Melhores prática para vetores:

O tamanho do vetor é constante, então sempre deve se escolher um bom tamanho.  

-> Se for muito grande, vamos desperdiçar memória.  
-> Se for muito pequeno, vai faltar memória.

Tome cuidado com a verificação do indice do vetor.

-> Indíces fora dos limites causam efeitos indesejados:
. alteram valores de outras variáveis
. causam _segmentation fault_

### **Trabalhando com Texto**

Como podemos representar um nome em C?

. Cada nome é uma sequência de caracteres  
. Então utilizamos um vetor de caracteres

#### **Estratégia para trabalhar com caracteres:**

Declare um vetor com espaço suficiente para um nome grande. Lemos então e letra do nome e armazenamos em um espaço do vetor, quando o nome acabar o usuário deve digitar o caractere "-".

**Porém, devemos notar que, para trabalhar com nomes mais complexos essa estratégia se torna ultrapassada. Pois ai então utilizamos Strings.**

#### **Sobre Strings:**

Em C, textos são vetores de caracteres. E para representar o final do texto, usamos o valor inteiro **zero**.

Na tabela ASCII, o número zero não corresponde a nenhum caractere! (As vezes representado como "caractere nulo" '\0').

**Atençao!! Sempre se lembre do caractere \0 que finaliza a String. Por exemplo, para armazenar "ROMA" precisamos de um vetor de tamanho cinco!**

As funções printf e scanf facilitam nossa vida quanto a isso.

Exemplo:
```
char nome[30];

printf("Escreva o nome: ");
scanf("%s", nome);

printf("O nome digitado foi %s", nome);
```
OBS: para strings não utilizamos o operador de memória &.

Outros exemplos com String:
```
char nome[30], nome_invertido[30];

int i, tamanho;

// lê o nome
printf("Escreva o nome: ");
scanf("%s", nome);

// descobre o número de caracteres do nome
for (tamanho = 0; nome[tamanho] != ’\0’; tamanho++);

// copia o nome em outro vetor na ordem inversa
for (i = 0; i < tamanho; i++)
nome_invertido[i] = nome[tamanho - i - 1];

// coloca o caractere de final de string no nome invertido
nome_invertido[tamanho] = ’\0’;

printf("O nome invertido é %s", nome_invertido);
```