## **Anotações Aula 02 - ATPII**

### **Funções - Definição**
São estruturas que agrupam um conjunto de comandos que são executados quando a função é chamada. As funções podem retornar um valor ao final da sua execução.

Exemplo: `X = sqrt(4);`

#### **Por que utilizar funções?**

- Evitar que os blocos do programa fiquem grandes demais;
- Separar o programa em várias partes menores para compreender a lógica;
- Permitir reaproveitamento de código;
- Evitar repetição de código;

#### **Definindo uma função:**

```
tipo nome(tipo parametro1, ..., tipo parametroN) {
    comandos;
    return valor do retorno;
}
```

Observação: Toda função deve ter um tipo, esse tipo determinará qual será o tipo do valor que ela vai retornar.

Dicas:
- Se uma função não tem parâmetros, é só não informar nenhum;
- O comando `return` é o último a ser chamado por uma função; nada depois dele será executado;
- Funções só podem ser declaradas fora de outras funções.