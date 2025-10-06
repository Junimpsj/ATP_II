## **Anotações Aula 10 - ATP II**

### **Arquivos**
Pensamos no problema: como podemos armazenar os dados de um aluno (RA, nome, telefone) para poder acessá-los depois?

- Para armazenar dados, usamos variáveis na memória
- **Mas**, os dados na memória só ficam disponíveis durante a execução do programa
- Como armazenamos dados **permanentemente**?

A solução para isso são os **arquivos**.

Um arquivo é um conjunto de dados organizados sequencialmente, armazenados em um dispositivo de memória permanente e acessados por meio de um nome.

Através dos arquivos podemos armazenar grande quantidade de dados, e esses dados são persistentes.

O acesso aos dados do arquivo pode se dar:
- Sequencialmente, na ordem em que os dados foram armazenados
- Diretamente, obtendo o dado desejado usando um índice

Arquivos normalmente são identificados por um nome e contêm uma extensão que corresponde ao tipo de dado que ele armazena.
- arq.txt -> texto simples
- arq.pdf -> texto formatado
- arq.c -> código-fonte em C
- arq.html -> página da internet
- arq.exe -> executável

Obs.: podemos considerar um diretório como uma lista de arquivos

### **Caminhos de Arquivos**
Para identificar um arquivo, utilizamos o nome simples ou o nome completo na hierarquia de diretórios.

Usamos barra **/** para separar diretórios (ou contrabarra no Windows).

Exemplos de caminhos:
```
Absoluto: a partir do diretório raiz:
/home/maria/imagem.jpg
/home/pedro/arquivo.txt
/home/pedro/mc102/lab.c

Relativo: a partir do diretório corrente (por exemplo, /home/pedro):
../maria/imagem.txt
arquivo.txt
mc102/lab.c
```

### **Atributos de Arquivos**
Arquivos possuem vários atributos que controlam sua segurança através de permissões:
- Nome do arquivo
- Proprietário do arquivo
- Datas de criação, alteração e acesso
- Tamanho em bytes
- Permissão de acesso