## Anotações Aula 4.5 - ATP II

### **Ordenação**
Vamos estudar agora algoritmos para ordenar conjuntos de elementos. Os elementos podem ser de qualquer tipo que possamos comparar:  
. números inteiros;  
. nome de pessoas;  
. times de futebol...

Os algoritmos podem ordenar crescente ou decrescentemente, dependendo da direção da comparação.

E quando falamos em algoritmos de ordenação, existem diversas **estratégias** que podemos utilizar, alguns exemplos são:  
-> Selecionar o menor a cada vez e colocar na ponta;  
-> Trocar itens fora de ordem;  
-> Outras?

"Estratégias diferentes levam a algoritmos diferentes".

### **Ordenação por Seleção**
Na ordenação por seleção temos a ideia inicial, a mais básica, de fazer da seguinte forma:

. Inicialmente, temos uma lista de itens desordenados  
. Selecionamos o menor dos elementos  
. Movemos o item para uma nova lista na primeiro posição  
. Voltamos para a lista inicial e selecionamos o menor novamente
. Movemos o item para a nova lista na segunda posição  
. Repetimos esse processo...

Porém, podemos ainda assim melhorar esse processo de forma que não precisamos de uma nova lista. Seguimos:

. Selecionar menor elemento  
. Trocar com o primeiro elemento da lista  
. Repetimos esse processo...

#### **Convenções práticas**

Vamos entender a lógica na prática para implementar uma função que ordena inteiros.

A função terá os seguintes parâmetros: 

``int vetor[]``, vetor de inteiros onde estão os elementos.  

``int n``, o número de elementos do vetor.

**OBS:** Para trocar dois valores, vamos sempre utilizar da seguinte função:

```
void trocar(int *a, int *b) {
    int aux = *a;

    *a = *b;
    *b = aux;
}
```

#### **Selection-sort**

```
int selection_sort(int vetor[], int n) {
    int i, menor;

    for(i = 0 ; i < n ; i++) {
        menor = menor_elemento(vetor, n, i);
        trocar(&vetor[i], &vetor[menor]);
    }
}
```

O selection-sort tem uma lógica bem básica onde recebemos o vetor e seu tamanho como parâmetros. Criamos então dentro da função um contador "i" qualquer e uma variável "menor" que vai guardar a posição do menor número no vetor.

Por fim, utilizamos um for padrão para percorrer o vetor de forma que a cada iteração recebemos a posição do próximo menor número do vetor com a função "menor_elemento" que é uma função auxiliar que vou mostrar a seguir. E então realizamos por fim a troca com a linha de comendo "trocar(&vetor[i], &vetor[menor])" dessa forma realizando a troca do elemento na posição atual (primeira, segunda, terceira etc...) com o elemento de menor número no vetor para obtermos a ordenação.

#### **Função auxiliar menor_elemento**

```
int menor_elemento(int vetor[], int n, int primeiro) {
    int i, menor = primeiro;

    for(i = primeiro + 1 ; i < n ; i++) {
        if(vetor[i] < vetor[menor]) {
            menor = i;
        }
    }
    return menor;
}
```

### **Ordenação por Inserção**
Na ordenação por inserção temos a ideia de ordenar da seguinte forma:

. pegamos uma lista de itens desordenados  
. retiramos o primeiro elementos  
. inserimos este item em uma nova lista **na ordem**  
. repetimos o processo....

E como devemos fazer esse processo utilizando um mesmo vetor?

. o primeiro elemento já está ordenado  
. retiramos o primeiro elemento desornado (o segundo elemento no caso)  
. procuramos a posição em que ele deve ser inserido  
. deslocamos os elementos ordenados seguintes  
. inserimos o elemento retirado na ordem correta  
. repetimos com o restante da lista

#### **Insertion_sorte**

```
int ordenar_insercao(int vetor[], int n) {

int i, posicao;
int elemento;

for (i = 1; i < n; i++) {
elemento = vetor[i];
posicao = posicao_elemento(vetor, i-1, elemento);
deslocar_subvetor(vetor, posicao, i-1);
vetor[posicao] = elemento;
}

}
```

#### **Funções auxiliares**

##### **Posição de inserção (na lista já ordenada)**

```
int posicao_elemento(int vetor[], int ultimo, int elemento) {

int i;

for (i = 0; i <= ultimo && vetor[i] <= elemento; i++);

return i;
}
```

#### **Deslocar parte do valor**

```
void deslocar_subvetor(int vetor[], int primeiro, int ultimo) {

int i;
for (i = ultimo; i >= primeiro; i--) {
vetor[i+1] = vetor[i];
}

}
```

**OBS IMPORTANTE:** Devemos perceber a diferença inerente entre a ordenação por seleção e a ordenação por inserção.

Na ordenação por seleção, a primeira coisa a se fazer é identificar o elemento que deve ser o próximo da ordem (no caso de uma ordem crescente, começamos pelo menor elemento e assim vamos) e depois jogamos para um novo vetor só inserindo em sequência pois a seleção do elemento certo já foi feita antes.

No caso da ordenação por inserção, nós selecionamos qualquer elemento do vetor (claro que fazemos isso seguindo uma ordem de primeiro, segundo, terceiro elemento etc...) e quando vamos inserir ele em seu novo vetor ordenado ou em sua nova posição ai sim que verificamos em qual posição ele deve entrar.

Basicamente, na primeira já realizamos a seleção do elemento correto que deve ser o próximo da ordem antes e na segunda nós podemos pegar um elemento "aleatório" pois é quando vamos inserir ele na ordem correta que fazemos a verificação.