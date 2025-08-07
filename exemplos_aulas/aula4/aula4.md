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

