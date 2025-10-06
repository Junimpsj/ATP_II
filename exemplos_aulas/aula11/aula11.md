## **Anotações Aula 11 - ATP II**

### **Arquivos de Texto e Arquivos Binários**

Os arquivos podem ser classificados em dois grupos:
- De Texto
- Binários

Um arquivo de texto contém apenas caracteres imprimíveis que são legíveis por um ser humano. Podem ser mostrados diretamente na tela e podem ser modificados por um editor de texto simples.

Já o arquivo binário é composto por uma sequência de bits que são legíveis apenas pelo programa que o gerou. É organizado de acordo com alguma regra ou convenção.

### **Abrindo um Arquivo**

Em C, representamos um arquivo por um tipo especial de variável:
`FILE *nome_variavel;`

E aí precisamos processar esse arquivo, certo? Precisamos abrir e ler ele no caso. Dessa forma:

- Para acessar um arquivo, precisamos antes abri-lo (iniciar e verificar uma variável do tipo FILE)
- Quando terminamos o acesso, precisamos fechá-lo (finalizar o uso da variável FILE e salvar as alterações)

```
FILE *arq;
arq = fopen("arquivo.txt", "r");

...

fclose(arq);
```

#### **Função FOPEN**

A função fopen funciona da seguinte maneira:
- O primeiro parâmetro é uma string com o nome do arquivo
- O segundo parâmetro é uma string com o modo em que o arquivo será aberto (se é binário, se é aberto para leitura ou escrita etc...)

#### **Lidando com Erros**

Ao abrir um arquivo, alguns erros podem acontecer:
- O arquivo pode não existir
- A permissão de acesso pode ser negada

Em caso de erro a função fopen deve retornar NULL. Também podemos obter uma mensagem de erro com a função "perror"

```
FILE *arq;

arq = fopen("arquivo.txt", "r");

if (arq == NULL) {
    perror("arquivo.txt:");
} else {
    printf("Arquivo aberto para leitura!");
    fclose(arq);
}
```

### **Lendo e Escrevendo um Arquivo**

#### **Leitura**

Como podemos armazenar os dados em um arquivo de texto? (realizar a escrita)

Bom, devemos abrir o arquivo em modo de escrita e escrever no arquivo utilizando o comando "fprintf"

`...fopen("dados_aluno.txt", "w"); ... fclose(arq);`

O modo de escrita é representado pelo W de Write, se o arquivo não existe ele é criado nesse modo.

Exemplo:
```
struct ficha_aluno aluno;
FILE *arq;
arq = fopen("dados_aluno.txt", "w");

scanf("%d", &aluno.ra);
scanf("%s", aluno.nome);
scanf("%d", &aluno.telefone);

fprintf(arq, "%d\n", aluno.ra);
fprintf(arq, "%s\n", aluno.nome);
fprintf(arq, "%d\n", aluno.telefone);

fclose(arq);
```

Como podemos ver a função "fprintf" recebe no seu primeiro parâmetro uma referência para a variável FILE e os outros são iguais ao comando printf normal.

#### **Escrita**

Agora então como podemos recuperar os dados do aluno armazenados no arquivo de texto?

Devemos abrir o arquivo em modo de leitura e ler cada um dos dados na ordem em que foram armazenados (sequencialmente).

Da mesma forma que utilizamos o fprintf para escrever dados no arquivo agora temos também o "fscanf" para ler dados do arquivo.

Mas agora o arquivo deve ser aberto em modo de leitura:

`... fopen("dados_aluno.txt", "r"); ... fclose(arq);`

E caso o arquivo não exista, retornamos NULL.

Exemplo:
```
struct ficha_aluno aluno;
FILE *arq;
arq = fopen("dados_aluno.txt", "r");

fscanf(arq, "%d", &aluno.ra);
fscanf(arq, "%s", aluno.nome);
fscanf(arq, "%d", &aluno.telefone);

printf("%d", aluno.ra);
printf("%s", aluno.nome);
printf("%d", aluno.telefone);

fclose(arq);
```

#### **Apontador do Arquivo**

Para cada arquivo aberto, um apontador é criado para indicar a posição de leitura ou escrita atual.

Se o arquivo tiver sido aberto para:
- leitura, aponta para o próximo caractere a ser lido
- escrita, aponta para a próxima posição de escrita

Observações: A cada operação de leitura no arquivo, o cursor se move automaticamente para o próximo caractere.

Se o ponteiro estiver no fim do arquivo, a função fscanf retorna um valor especial EFO (End Of File).

Para voltar ao início do arquivo, podemos usar o comando **rewind**.


### **Exemplos**

Protótipo da função fopen():  
`FILE* fopen(char caminho[], char modo[]);`

Modos de abertura dos arquivos:  

|Modo|Operações|Ponto no Arquivo                 |
|----|---------|---------------------------------|
|"r" |Leitura           |Início                  |
|"r+"|Leitura e Escrita |Início                  |
|"w" |Escrita           |Inicio (trunca arquivo) |
|"w+"|Escrita e Leitura |Inicio (trunca arquivo) |
|"a" |Escrita           |Final                   |
|"a+"|Leitura / Escrita |Início / Final          |

Ao abrir um arquivo se ele estiver no modo de leitura "r" ou "r+":
- se não existe, ocorre um erro
- se o arquivo existir, os dados permanecem

Em mode de escrita "w" ou "w+"
- se o arquivo não existir, ele é criado
- se o arquivo existir, ele é esvaziado

Em moode de apêndice "a" ou "a+"
- se o arquivo não existir, ele é criado
- se o arquivo existir, os dados são escritos no final

Outras operações de arquivo são:
- Remover: remove("arquivo.txt);
- Renomear/mover: rename("nome_antigo.txt", "nome_nome.txt");