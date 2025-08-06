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

