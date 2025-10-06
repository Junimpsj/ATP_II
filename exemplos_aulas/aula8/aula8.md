## **Anotações Aula 8 - ATP II**

### **Matrizes**
Considere a seguinte matriz:

|.       |**0**|**1**|**2**|**3**|
|---     |---  |---  |---  |---  |
|**0**   |1    |2    |3    |4    |
|**1**   |11   |12   |13   |14   |
|**2**   |121  |122  |123  |124  |

OBS: a primeira linha e a primeira coluna que estão em negrito servem apenas para mostrar a posição dos números, sendo i e j.

A matriz é uma estrutura bidimensional, mas a memória é linear. E para armazená-la fazemos isso com uma linha de cada vez, pensando na memória como um vetor.

No vetor:
### Vetor

| Índice | **0** | **1** | **2** | **3** | **4** | **5** | **6** | **7** | **8**  | **9**  | **10** | **11** |
|--------|-------|-------|-------|-------|-------|-------|-------|-------|--------|--------|--------|--------|
| Valor  | 1     | 2     | 3     | 4     | 11    | 12    | 13    | 14    | 121    | 122    | 123    | 124    |

Como, então, encontrar por exemplo a posição `matriz[2][1]`, sendo o valor 122 na matriz linear?

Utilizamos a fórmula: `i * qtdColunas + j`.

Sendo i o índice da linha na matriz convencional e j o índice da coluna na matriz convencional.

Observe que precisamos saber a largura da matriz para isso (sua quantidade de colunas).

#### **Matriz convencional vs. linearizada**

Aqui veremos apenas um exemplo em código de como realizar essa transformação da matriz convencional para a linearizada.

```
#define ALTURA 3
#define LARGURA 4

int i, j;
int matriz[ALTURA][LARGURA];
int matriz_linear[LARGURA * ALTURA];

// lendo a matriz
for(i = 0 ; i < ALTURA ; i++) {
    for(j = 0 ; j < LARGURA ; j++) {
        scanf("%d", &matriz[i][j]);
    }
}

// copiando para vetor
for(i = 0 ; i < ALTURA ; i++) {
    for(j = 0 ; j < LARGURA ; j++) {
        matriz_linear[i * LARGURA + j] = matriz[i][j];
    }
}
```

#### **Representação linear de matriz**

Existem duas maneiras de representar uma matriz Mmxn, linearmente:

**Linha-a-Linha (Row Major Order)**
- As linhas são armazenadas sequencialmente
- Precisamos conhecer a largura para acessar um valor
- O valor Mij corresponde à posição i * n  + j no vetor
- É o padrão usado em C

**Coluna-a-Coluna (Column-Major Order)**

- As colunas são armazenadas sequencialmente
- Precisamos conhecer a largura para acessar um valor
- O valor Mij corresponde à posição j * m + i no vetor
- Algumas linguagens utilizam esse padrão (Fortran, MATLAB)