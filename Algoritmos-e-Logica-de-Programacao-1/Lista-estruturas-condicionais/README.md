# Lista de Estruturas Condicionais

## 1. Equação do primeiro grau

O exercício consiste em criar um programa para calcular as raízes de uma equação do segundo grau, seguindo as regras da fórmula de Bhaskara.

O programa deve receber três números reais, a, b e c, que são os coeficientes da equação $ ax^2+bx+c=0 $

A saída do programa deve ser:

* As duas raízes da equação, formatadas com duas casas decimais, caso existam.

* A mensagem "NRR" (não existem raízes reais), se o delta for menor que 0.

* A mensagem "NEESG" (não é uma equação do segundo grau), se o coeficiente a for igual a 0.

O cálculo das raízes depende do valor do delta, que é $ b^2−4ac $

## 2. Acima da Média

Este programa recebe três números de ponto flutuante e calcula quantos deles são maiores que a média aritmética.

-   **Entrada**: Três números positivos com, no máximo, duas casas decimais, e com valor menor ou igual a 10.0.
    - 2.0
    9.0
    10.0
-   **Processamento**: O programa calcula a média dos três números e, em seguida, compara cada um deles com a média para contar quantos são superiores a ela.
-   **Saída**: A quantidade total de números que estão acima da média.
    - 2

## 3. Dia da Semana

Este programa simples recebe um número natural de 1 a 7 e retorna o dia da semana correspondente. A semana é considerada começando no domingo.

-   **Entrada**: Um único número natural entre 1 e 7.
-   **Processamento**: O programa mapeia o número de entrada para um dia da semana.
    -   1 = domingo
    -   2 = segunda
    -   3 = terca
    -   ...e assim por diante.
-   **Saída**: O nome do dia da semana correspondente, em letras minúsculas e sem acentuação.

## 4. 🛒 Mercearia do Ambrósio

Este exercício consiste em calcular o valor final de uma compra na mercearia, aplicando regras de desconto conforme a quantidade ou o valor total dos produtos.

A mercearia possui 4 produtos fixos:

| Código | Preço |
|--------|-------|
| 1      | R$ 5,30 |
| 2      | R$ 6,00 |
| 3      | R$ 3,20 |
| 4      | R$ 2,50 |

**Regras:** aplica-se 15% de desconto se a quantidade ≥ 15 ou o total ≥ R$ 40.  
**Entrada:** código do produto e quantidade comprada.  
**Saída:** valor final a pagar no formato `R$ x.xx` (duas casas decimais).  

Exemplo:  
**Entrada**: `4` e `15`  
**Saída**: `R$ 31.88`

## 5. 🔢 Pares, Ímpares, Positivos e Negativos

Este exercício consiste em ler um número inteiro e identificar se ele é **par ou ímpar**, além de verificar se é **positivo, negativo ou nulo**. O resultado deve ser exibido em letras maiúsculas.

### 📥 Entrada
- Um número inteiro `N` (até 10¹²).

### 📤 Saída
- Uma frase indicando a classificação do número:  
  - `POSITIVO PAR`  
  - `POSITIVO IMPAR`  
  - `NEGATIVO PAR`  
  - `NEGATIVO IMPAR`  
  - `NULO`  

### 📌 Exemplo
**Entrada**: 11

**Saída**: POSITIVO IMPAR

## 6. Decrescente 3

Este programa lê três números inteiros e os imprime em ordem decrescente (do maior para o menor).  
O desafio é tentar resolver utilizando apenas quatro comandos `if`.

### 📥 Entrada:
Três números inteiros.

### ⚙️ Processamento:
O programa compara os valores entre si e os organiza em ordem decrescente.

### 📤 Saída:
Os três números ordenados do maior para o menor.

### 📌 Exemplo

**Entrada**:
2
40
101


**Saída**:
101
40
2

---

## 7. Produto mais barato

Este programa pergunta o preço de três produtos e informa qual deles deve ser comprado, considerando sempre o mais barato.

### 📥 Entrada:
Três números reais correspondentes aos preços dos produtos.

### ⚙️ Processamento:
O programa compara os valores e identifica o menor preço entre os três.

### 📤 Saída:
Indicação de qual produto deve ser comprado (primeiro, segundo ou terceiro).

### 📌 Exemplo
**Entrada**:
20.0
15.87
6.99

**Saída**:
Terceiro produto

---

## 8. Ano Bissexto

Este programa recebe um ano e verifica se ele é bissexto ou não.

### 📥 Entrada:
Um número inteiro representando o ano.

### ⚙️ Processamento:
O programa aplica as regras de ano bissexto:
- É múltiplo de 4;
- Não pode ser múltiplo de 100, exceto se também for múltiplo de 400.

### 📤 Saída:
`BISSEXTO` ou `NAOBISSEXTO`.

### 📌 Exemplo
**Entrada**:
2000

**Saída**:
BISSEXTO

---

## 9. Triângulo

Este programa recebe três valores inteiros e verifica se eles podem formar um triângulo. Caso positivo, identifica se o triângulo é equilátero, isósceles ou escaleno.

### 📥 Entrada:
Três números inteiros representando os lados de um triângulo.

### ⚙️ Processamento:
- Verifica se a soma de dois lados é sempre maior que o terceiro (condição de existência de triângulo).
- Classifica o triângulo em:
  - **Equilátero**: três lados iguais.
  - **Isósceles**: dois lados iguais.
  - **Escaleno**: três lados diferentes.

### 📤 Saída:
O tipo do triângulo ou a indicação de que não forma um triângulo.

### 📌 Exemplo
**Entrada**:
5
5
5

**Saída**:
Equilátero

---

## 10. Ambrósio e a gasolina

Este programa calcula se Ambrósio pode realizar sua viagem de carro com a quantidade de dinheiro que possui, considerando o consumo do veículo e o preço da gasolina.

### 📥 Entrada:
Cinco inteiros:  
- `D`: distância até o destino (km)  
- `R`: quantidade de dinheiro disponível (reais)  
- `L`: capacidade do tanque (litros)  
- `P`: quantidade de postos de gasolina no caminho  
- `G`: preço da gasolina (R$/litro)

### ⚙️ Processamento:
- Calcula a autonomia inicial do carro (10 km/L).  
- Verifica se é possível chegar ao destino sem abastecer.  
- Caso precise, considera o abastecimento nos postos, respeitando a capacidade do tanque e o valor disponível.  
- Verifica se ainda sobra dinheiro após a viagem.

### 📤 Saída:
- `"Pode viajar. R$: X"` → se a viagem for possível e informa quanto restou de dinheiro.  
- `"Nao pode viajar."` → se não houver condições de completar o percurso.

### 📌 Exemplo
**Entrada**:
200
15
1
4
6

**Saída**:
Pode viajar.
R$: 80
