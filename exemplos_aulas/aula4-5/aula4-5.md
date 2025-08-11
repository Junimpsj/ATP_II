## Anotações Aula 4.5 - ATP II

### **Ponteiros**
Relembrando os operadores de ponteiros:  
**&** retorna o endereço de memória de uma varíavel  
__*__ acessa o conteúdo do endereço indicado pelo ponteiro

### **Alocação Dinâmica**
As vezes queremos criar variáveis durante a execução, mas porque não declarar variáveis locais?

Bem, não sabemos quantas variáveis e quando declará-las, as vezes umas função pode ter que criar uma variável para outras funções usarem e queremos usar uma organização mais complexa de memória também.

#### **Regras da alocação dinâmica**

-> Devemos incluir a biblioteca stdlib.h;  
-> O tamanho gasto por um tipo pode ser obtido com sizeof;  
-> Devemos informar o tamanho a ser reservado com malloc;  
-> Devemos verificar se acabou a memória comparando com NULL;  
-> Devemos sempre liberar a memória após a utilização com free;

### **Pilha e Heap**
Para entender melhor a organização da memória vamos ver dois conceitos muito importantes: Pilha e Heap.

**Pilha:** Onde são armazenadas as variáveis;  
**Heap:** Onde são armazenadas as variáveis criadas pelo programador;

Sobre as variáveis locais: o compilador reserva um espaço na pilha, a variável é acessada por um nome bem definido e o espaço é liberado quando a função termina.

Já sobre as variáveis dinâmicas: o programador reserva um número de bytes no heap com malloc, devemos guardar o endereço da variável com um ponteiro e o espaço deve ser liberado utlizando do comando free.

### **Ponteiros como vetores**
Se escrevermos o nome de um vetor, obtemos um ponteiro para ele e então podemos usar ponteiros como se fossem vetores.

ex:
```
Lendo quantidade variável de notas

int main() {

float *notas; // será usado como um vetor!
int i, n;

scanf("%d", &n);

notas = malloc(n * sizeof(float));

for (i = 0; i < n; i++)
scanf("%d", &notas[i]);
// ...
free(notas);

return 0;
}
```

### **Aritmética de ponteiros**
Vetores são ponteiros constantes: não podem ser alterados. Podemos também realizar operações aritmética em ponterios como soma, subtração, incrementação e decremento.

Então devemos lembrar que podemos manipular a posição do ponteiro através disso e etc...