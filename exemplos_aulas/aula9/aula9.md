## **Anotações Aula 9 - ATP II**

### **Armazenando Vários Dados**
Como armazenamos os dados de um aluno por exemplo? (RA, telefone, nome, endereço e data de nascimento)

Uma alternativa é criar uma variável para cada uma das informações que queremos coletar e então preencher essas variáveis, certo? Legal, porém e se quiséssemos copiar os dados do aluno? Ou então passar os dados como parâmetros de função?

Possível de fazer com variáveis isoladas? Claro, mas muito trabalhoso. Mas e se existisse um tipo com todos os dados juntos em uma só estrutura como: `struct ficha_aluno`.

### **Registro**
Um registro é uma coleção de variáveis relacionadas de vários tipos, organizadas em uma única estrutura e referenciadas por um nome comum.

Suas principais características são:
- Cada variável é chamada de membro do registro
- Cada membro é acessado por um nome na estrutura
- Cada estrutura define um novo tipo, com as mesmas características de um tipo padrão da linguagem

A declaração seria assim:
```
struct identificador {
    tipo1 membro1;
    tipo2 membro2;
    ...
    tipoN membroN;
}
```

Declarando um registro: `struct identificador nome_registro`.

Em C declaramos um tipo de uma estrutura apenas uma vez e podemos declarar vários registros da mesma estrutura.

#### **Exemplos de Estrutura**
Ficha de dados cadastrais de um aluno:
```
struct ficha_aluno {
    int ra;
    int telefone;
    char nome[30];
    char endereco[100];
    int dia_nascimento;
    int mes_nascimento;
    int ano_nascimento;
}
```

Perceba que as variáveis dia, mês e ano_nascimento são relacionadas. Por isso podemos também agrupá-las em uma estrutura!

```
struct data {
    int dia;
    int mes;
    int ano;
}
```

E agora a ficha do aluno ficaria assim:
```
struct ficha_aluno {
    int ra;
    int telefone;
    char nome[30];
    char endereco[100];
    struct data nascimento;
}
```

#### **Utilizando um Registro**
Para acessar um membro do registro fazemos da seguinte forma: `registro.membro`.

Vamos, por exemplo, imprimir o nome de um aluno:
```
struct ficha_aluno aluno;
...
printf("Nome: %s", aluno.nome);
```

Ou então imprimir seu aniversário:
```
struct ficha_aluno aluno;
...
printf("Aniversário: %d/%d", aluno.nascimento.dia, aluno.nascimento.mes);
```

OBS: Tem um exemplo no arquivo .c dessa aula sobre média das notas!

#### **Registros em funções**
Registros podem ser usados como qualquer outro tipo.
- Por padrão, são passados por valor em parâmetros
- Estruturas podem ser usadas como tipo de retorno de uma função

Podemos também utilizar uma notação sinônima:
Ao invés de `registro.membro` usamos `registro->membro`.

### **Enumeração**
Em C, como podemos representar um conjunto conhecido de elementos, como os meses do ano ou um certo conjunto de cores?

- Podemos enumerar os elementos, isto é, escrevê-los em uma lista
- Então podemos atribuir um número a cada um deles

Exemplo:
```
#define VERMELHO 0
#define VERDE 1
#define AZUL 2
#define MARROM 3
#define ROXO 4
#define AMARELO 5
```

Porém, existe uma forma mais fácil de fazer isso utilizando a **enumeração** com uma estrutura mais simples:
```
enum cores {
    VERMELHO,
    VERDE,
    AZUL,
    MARROM,
    ROXO,
    AMARELO
}
```

A enumeração atribui um inteiro a cada uma das constantes começando por 0. Por exemplo, o vermelho vale 0 e o MARROM vale 3.

Para mudar o valor inicial de uma enumeração, basta usar o operador `=`.

```
enum meses {
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    ...
    DEZEMBRO
}
```

### **Nomeando Tipos de Dados**
Podemos criar novos tipos de dados ou enumerações e, para explicitar o significado de cada tipo, podemos dar **apelidos** para tipos de dados primários, estruturas ou enumerações.

Comando typedef: `typedef tipo_existente apelido`.

Exemplo:
```
typedef enum {
    VERMELHO, VERDE, AZUL
} Cor;

typedef float Medida;

typedef struct {
    medida altura, largura;
    Cor cor_face, cor_linha;
} Retangulo;
```