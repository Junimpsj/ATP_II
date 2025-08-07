## Anotações Aula 03 - ATPII

### **Funções pt.2**
Vamos ver aqui sobre Funções vs Procedimentos.

Funções podem retornar apenas um valor, ou também podem apenas realizar um "procedimento".  
Um procedimento é uma função que não retorna nenhum valor. Procedimentos são indicados pela palavra-chave especial **void**.

Exemplos:  
```
Procedimento:

void soma(int a, int b) {
printf("Soma:%d", a+b);
}
```

```
Função:

int soma(int a, int b) {
return a+b;
}
```

Perceba que no caso do procedimento, não temos nenhum "return" pois ele não retorna nenhuma valor apenas realiza uma tarefa/procedimento que no exemplo é o procedimento de realizar um printf.

#### **A palavra chave VOID**

Em C, a palavra void representa a "ausência" de algum objeto. Pode ser usado para:  
-> indicar ausência de um tipo de retorno;
-> explicitar a ausência de parâmetros em uma função;

No caso da ausência de retorno, ja sabemos utilizar o tipo void. Vou mostrar um exemplo de ausência de parâmetros abaixo:

```
int obtem_numero(void) {
int n;
scanf("%d", &n);
return n;
}
```

#### **A função MAIN**

A main do nosso programa é um exemplo de função. Mas no caso, a função *PRINCIPAL* do nosso sistema.

O programa principal do nossos sistema é uma função especial com tipo de retorno int. Essa função é invocada automaticamente pelo sistema operacional.  
-> Deve retornar 0 caso tenha funcionado corretamente;
-> Deve retornar qualquer outro valor caso tenha ocorrido um erro;

#### **Protótipos de funções**

Para organizar melhor um programa e implementar funções em partes distintas do arquivo são utilizado **protótipos de funções**.

Eles são basicamente a primeira linha da declaração de uma função (o cabeçalho da função) onde declaramos seu tipo, seu nome e seus parâmetros.

Note que:
```
tipo nome(tipo parametro1, ..., tipo parametroN);
```

O protótipo de uma função deve sempre vir antes de seu uso. Já sua definição pode aparecer em qualquer lugar do programa.

#### **Variaveis locais e globais**

Uma variável é **local** se ela foi declarada dentro de uma função:  
-> ela existe somente dentro da função;  
-> quando a execução da função termina, a variável deixa de existir;  
-> parâmetros são variáveis locais;

Uma variável é **global** se ela for declarada fora de qualquer função:  
-> a variável é visível em todas as funções;  
-> qualquer função pode modificar a variável;  
-> a variável existe durante toda a execução do programa;  
-> só deve ser usada em casos muito especiais;

OBS: O **escopo** de uma variável determina onde ela pode ser acessada, a regra de escopo em C é bem simples e se resumo nos dois tipos de váriaveis acima e suas definições.

#### **Passagem de parâmetros**

Os parâmetros de funções podem ser passados de dois modos:
-> Por **valor**, onde os valores são copiados (modo padrão);
-> Por **referência**, onde uma referência para o local de memória da variável é passado;

| Por Valor                                            | Por Referência |
| ---------------------------------------------------- | ----------------------------------------------- |
| Apenas o resultado da expressão é passado            | Uma referência de uma variável é passada        |
| Pode ser qualquer expressão                          | Apenas variáveis podem ser utilizadas           |
| Os valores são atribuidos para os parâmetros formais | A referência deve ser explicita com o operador &|
| Não alteram os valores das variáveis passadas        | Alteram o valor das variáveis passadas          |

Para se acessar a variável referenciada dentro da função na passagem por referência devemos preceder a variável com o símbolo "*".

### **Ponteiros**

Em C, referências são implementadas por meio de ponteiros. Ponteiros correspondem ao endereço da variável na memória.  
Regras:

-> declaramos um ponteiro como tipo *ponteiro;  
-> obtemos um ponteiro de uma variável com o operador &;  
-> obtemos a variável de um ponteiro com o operador "*";

Dicas:

-> *ptr : o apontado por, o conteúdo do endereço da varíavel que o ptr aponta (ou então lembra que o * significa que estamos mexendo com o conteúdo da varíavel apontada);  
-> ptr : o endereço da variavel;  
-> &ptr : o endereço do ponteiro;