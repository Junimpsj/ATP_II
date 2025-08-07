## Anotações Aula 04 - ATPII

### **Recursão**
A ideia é que um problema pode ser resolvido da seguinte maneira:  
-> **primeiramente**, definimos soluçoes para casos básicos (casos base);  
-> **em seguida**, tentamos reduzir o problema para instâncias menoras;  
-> **finalmente**, combinamos o resultado das instâncias menores para obter um resultado do problema original;

Certos tipos de problemas são naturalmente recursivos, como por exemplo o fatorial de um número.

$$
n! = 
\begin{cases}
1 & \text{se } n = 0 \\
n \cdot (n - 1)! & \text{se } n > 0
\end{cases}
$$

Mas então, como vamos calcular o fatorial com recursão? Respondendo às seguintes perguntas:

```
Qual é a base da recursão?
- O caso n = 0

Qual a menor instância na qual podemos reduzir o problema?
- A instância (n - 1)!

Como combinamos o resultado para resolver o problema original?
- Multiplicamos por N o resultado do problema menor
```

### **Pilhas de chamada**
Situação: Lidando com váriáveis da função.  
. Imagine que toda função tem suas variáveis locais;
. Quando chamamos a função fatorial, cada chamada cria as variáveis N, X e Y;  
. Só que nós chamamos a função fatorial várias vezes, afinal ela é recursiva;  
. Então, em um dado instante, podem existir variáveis N, X e Y, um trio para cada chamada (e ai fudeu);

Para manter várias cópias de variáveis locais de uma função, elas são colocadas em uma pilha de chamada (ou pilha de execução) toda vez que uma função é chamada e são retirada da pilha quando a função termina.

E é isso ai, por enquanto é só pra entender esse conceito mesmo 👍