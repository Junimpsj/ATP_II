## **Anotações Aula 12 - ATP II**

### **Introdução**

Existem dois tipos de arquivos: textos e binários.

Qual seria o tamanho gasto para representar o número 12345678.9?
- Em arquivos de texto seriam 10 bytes (10 caracteres)
- Em arquivos binários seriam 4 bytes (1 float)

E o número 1.2?
- Em arquivos de texto seriam 3 bytes (3 caracteres)
- Em arquivos binários seriam 4 bytes (1 float)

Ou seja, dados salvos como texto têm tamanhos variáveis e dados binários têm tamanhos fixos.

A vantagem de se utilizar arquivos binários é que:
- Reduzimos o tamanho do arquivo
- Simplificamos o armazenamento de estruturas complicadas
- Permite saber a posição de um dado no arquivo (conhecendo o tamanho dos dados)

### **Arquivos Binários em C**

A ideia geral de utilização dos arquivos binários em C é semelhante aos arquivos de texto, por exemplo, para abrir um arquivo binário em C fazemos:
- Criar referência FILE *arq
- Abrir em modo binário (exemplo "rb")
- Verificamos erros e fechamos o arquivo

Exemplo:
```
FILE *arq;

arq = fopen("arquivo.bin", "rb");
if(arq == NULL) {
    perror("arquivo.bin");
    return 1;
}

// manipula o arquivo....

fclose(arq);
```

Os modos de abertura para arquivos binários são:

| Modo  | Operações        | Ponto no Arquivo       |
|-------|------------------|------------------------|
| "rb"  | Leitura          | Início                 |
| "r+b" | Leitura e Escrita| Início                 |
| "wb"  | Escrita          | Início (trunca arquivo)|
| "w+b" | Escrita e Leitura| Início (trunca arquivo)|

### **Organizando Arquivos Binários**

Como podemos organizar um arquivo binário?

- Organizamos da mesma forma que organizamos a memória do computador
- Cada dado vai ser armazenado em um bloco do arquivo como se fosse uma variável
- A posição de cada dado depende da ordem e do tamanho dos dados armazenados

![Imagem](/exemplos_aulas/images/example_binary_archive.png)

### **Escrevendo em um Arquivo Binário**

Para escrever em um arquivo binário, vamos utilizar a função de escrita "fwrite"

`fwrite(void *bloco, int tamanho, int num_blocos, FILE *arq)`

Os parâmetros da fwrite são:
- Bloco é uma referência para a variável do bloco
- Tamanho é o tamanho em bytes de cada bloco (podemos saber o tamanho com sizeof(tipo))
- Num_blocos é o número de blocos armazenados em sequência
- Arq é a referência para o arquivo aberto em modo de escrita

OBS: podemos declarar `void *bloco` que significa que a variável do bloco pode ter qualquer tipo

Exemplo:

```
int ra, telefone;
char nome[30];

FILE *arq;
arq = fopen("dados_aluno.bin", "wb");

scanf("%d", &ra);
scanf("%d", &telefone);
scanf("%s", nome);

fwrite(&ra, sizeof(int), 1, arq);
fwrite(&telefone, sizeof(int), 1, arq);
fwrite(nome, sizeof(char), 30, arq);

fclose(arq);
```

### **Lendo de um Arquivo Binário**

Para ler um arquivo binário, vamos utilizar a função de leitura "fread"

`fread(void *bloco, int tamanho, int num_blocos, FILE *arq);`

Os parâmetros da fread são:
- Bloco é uma referência para a variável do bloco
- Tamanho é o tamanho em bytes de cada bloco (podemos saber o tamanho com sizeof(tipo))
- Num_blocos é o número de blocos armazenados em sequência
- Arq é a referência para o arquivo aberto em modo de escrita

Exemplo:

```
int ra, telefone;
char nome[30];

FILE *arq;
arq = fopen("dados_aluno.bin", "rb");

fread(&ra, sizeof(int), 1, arq);
fread(&telefone, sizeof(int), 1, arq);
fread(nome, sizeof(char), 30, arq);

printf("%d", ra);
printf("%d", telefone);
printf("%d", nome);

fclose(arq);
```

### **Lidando com Estruturas Complexas**

As funções fwrite e fread podem receber qualquer tipo de variável e em qualquer número:
- Podemos gravar uma estrutura inteiro de uma só vez
- Também podemos gravar um vetor inteiro de uma só vez

Quando lemos um inteiro, o ponteiro do arquivo avança, mas como saber quando o ponteiro chegou ao final do arquivo? Utilizamos a função `feof(arquivo)` que retorna verdadeiro
quando chegou ao final do arquivo.

``` Teste FEOF

int i, vetor[1000];
FILE *arq;

arq = fopen("inteiros.bin", "rb");

i = 0;

while (!feof(arq)) {
    fread(&vetor[i], sizeof(int), 1, arq);
    i++
}

fclose(arq);

```

### **Acesso Direto à Informação**

Em arquivos binários, podemos acessar um dado diretamente e para isso movemos o ponteiro do arquivo para a posição correta. Somamos o tamanho de todos os dados armazenados antes no arquivo.

Por exemplo para achar o nome, somamos sizeof(ra) + sizeof(telefone) = 4 + 4 = 8;

Para posicionar o ponteiro de um arquivo utilizamos a função `fseek`:

`fseek(FILE *arq, int posicao, int posicao_origem);`

Os parâmetros da fseek são:
- arq é a referência para o arquivo
- posicao é a posição do ponteiro de arquivos
- posicao_origem indica a psição de origem do deslocamento:  
. SEEK_SET, a partir do inicio  
. SEEK_CUR, a partir da posição atual  
. SEEK_END, a partir do final de arquivo