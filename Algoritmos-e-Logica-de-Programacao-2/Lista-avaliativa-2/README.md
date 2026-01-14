# Lista avaliativa 2

## 1. Números Complexos

Um número complexo é representado algebricamente por , onde  é a parte real,  é a parte imaginária e  é a unidade imaginária (). Escreva um programa que receba dois números complexos e exiba a soma e o produto dos mesmos.
**Requisito:** Defina uma estrutura (*struct*) para armazenar as partes de um número complexo.

### 📥 Entrada:

* Primeira linha: dois números inteiros representando  e  do primeiro número complexo.
* Segunda linha: dois números inteiros representando  e  do segundo número complexo.

### 📤 Processamento:

Calcular a soma e o produto dos dois números complexos utilizando a estrutura definida.

### 📤 Saída:

* Primeira linha: `Soma: <resultado>`
* Segunda linha: `Multi: <resultado>`
*(Seguir a formatação do exemplo)*.

### 📌 Exemplo

**Entrada**:
2 5
1 -2

**Saída**:
Soma: 3+3i
Multi: 12+1i

---

## 2. Oficina do Joãozinho

Joãozinho quer descobrir quais os melhores carros de sua oficina baseando-se em três características: motor, suspensão e turbo. O desempenho é calculado pela **média ponderada** dessas notas. O programa deve listar os carros com desempenho acima da média geral.
**Requisito:** Defina uma estrutura (*struct*) para armazenar os dados de cada carro.

**Pesos:**

* Motor: peso 5
* Suspensão: peso 2
* Turbo: peso 3

### 📥 Entrada:

* Um número inteiro  representando a quantidade de carros.
* Em seguida, para cada carro: o nome do modelo (até 50 caracteres) e as notas de motor, suspensão e turbo (0 a 10).

### 📤 Processamento:

1. Calcular a média ponderada de cada carro.
2. Calcular a média aritmética geral de desempenho de todos os carros.
3. Identificar quais carros possuem desempenho maior ou igual à média geral.

### 📤 Saída:

O modelo dos carros que obtiveram desempenho acima ou igual à média aritmética geral, na ordem em que foram inseridos.

---

## 3. Aluno com Maior Média

Faça um programa que receba o nome e duas notas de vários alunos e exiba o nome daquele que obteve a maior média aritmética.
**Requisitos:**

* Defina uma estrutura (*struct*) para armazenar os dados.
* Armazene os dados em um **array dinâmico**, expandindo-o a **cada aluno informado**.
* A memória alocada deve ser liberada ao final.

### 📥 Entrada:

Os dados são fornecidos em três linhas por aluno:

1. Nome
2. Nota 1
3. Nota 2
*A leitura deve continuar até o final do arquivo (EOF) ou condição de parada implícita.*

### 📤 Processamento:

Ler os dados, alocar memória dinamicamente passo a passo, calcular as médias e encontrar a maior.

### 📤 Saída:

O nome do aluno com a maior média.

### 📌 Exemplo

**Entrada**:
Maria
3.5
10
Joao
5.1
1.2
Jose
9.5
8.5

**Saída**:
Jose