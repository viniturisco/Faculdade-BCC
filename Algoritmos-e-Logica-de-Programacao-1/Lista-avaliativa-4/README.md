# Lista Avaliativa 4

## 1. Fila de Banco

No Banco ABC, existem apenas dois caixas. Quando um dos funcionários sai para almoçar, as duas filas precisam ser integradas. A regra é: as pessoas da fila do funcionário que foi almoçar devem ser intercaladas com as pessoas da fila do funcionário que ficou trabalhando, a partir da segunda posição.

### 📥 Entrada:

Três números inteiros iniciais e duas sequências de números, representando respectivamente:

* : quantidade de pessoas na primeira fila ()
* : quantidade de pessoas na segunda fila ()
* : indicador de qual caixa saiu para almoçar ( para a primeira fila,  para a segunda)
*  inteiros representando as pessoas da primeira fila
*  inteiros representando as pessoas da segunda fila

### 📤 Processamento:

O programa deve identificar qual fila permanece (base) e qual será intercalada. Os elementos da fila do caixa que saiu são inseridos na fila do caixa que ficou, começando após a primeira posição.
**Obs.:** A nova fila deve, necessariamente, ser implementada em um **terceiro array**.

### 📤 Saída:

O programa imprime uma sequência de inteiros representando as pessoas da nova fila, um em cada linha (conforme descrição textual) ou em sequência (conforme exemplo visual).

### 📌 Exemplo

**Entrada**:
3 5 2
1 2 4 3 10 9 7 6

**Saída**:
1 3 2 10 4 9 7 6

---

## 2. Cálculo da Moda

Escreva um programa que calcule a moda dos valores lidos. A moda é o valor que ocorre com mais frequência em um conjunto de valores, isto é, o que aparece mais vezes. Por simplicidade, considere que sempre haverá um único valor para a moda.

### 📥 Entrada:

Uma lista de valores inteiros não negativos, separados por espaço, em uma única linha.

### 📤 Processamento:

O programa deve percorrer a lista de valores fornecida e contabilizar a frequência de cada número para identificar qual elemento aparece o maior número de vezes.

### 📤 Saída:

O programa imprime a moda do conjunto (um número inteiro).

### 📌 Exemplo

**Entrada**:
4 2 3 5 5

**Saída**:
5