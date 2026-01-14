# Lista Avaliativa 3 

## 1. Soma dos Dígitos

Crie um programa que tenha uma única função, além da principal, que receberá como parâmetro um número natural  () e devolverá a soma dos dígitos de .
**Observações:**
(a) Apenas um laço de repetição.
(b) Sem matrizes.
(c) Função iterativa.

### 📥 Entrada:

Um número natural (ex: `12345678`).

### 📤 Processamento:

O programa deve separar os dígitos do número fornecido e somá-los utilizando uma função iterativa.

### 📤 Saída:

O resultado da soma dos dígitos (ex: `36`).

### 📌 Exemplo

**Entrada**:
2041

**Saída**:
7

---

## 2. Série Fatorial e Primos

Faça um programa que mostre os  primeiros termos e calcule o resultado da seguinte série:


**Regra de formação:**

* **Numerador:** Fatorial dos números naturais não nulos ().
* **Denominador:** A partir do segundo termo, temos o **menor número primo** que seja maior ou igual ao dividendo (fatorial do numerador). *Nota: O exemplo visual da questão mostra denominadores simplificados, siga a regra textual ou o padrão do exemplo.*

**Requisitos:** O programa deve ter pelo menos 3 funções:

1. `eh_primo(x)`: retorna se  é primo ou não.
2. `proximo_primo(y)`: retorna o próximo número primo a partir de um número  dado.
3. `fatorial(z)`: retorna o fatorial de .

### 📥 Entrada:

Um número  que indica quantos termos devem ser calculados.

### 📤 Saída:

* Os termos da série (exibidos como soma).
* O resultado da soma com duas casas decimais de aproximação.

### 📌 Exemplo

**Entrada**:
3

**Saída**:
1!/1 + 2!/2 + 3!/3
4.00

---

## 3. Distância no Minecraft

Tantan precisa entregar encomendas para três vilas: Hogsmeade, Kakariko e Solitude. O mapa é composto por blocos (1 bloco = 1 metro). A distância é calculada no plano (ignorando a elevação Y) pela fórmula da distância euclidiana:


**Coordenadas das Vilas:**

* Hogsmeade ()
* Kakariko () *Obs: baseada na descrição textual e coordenadas do exemplo visual.*
* Solitude ()

### 📥 Entrada:

Um par de números inteiros  e , separados por espaço, indicando a coordenada atual de Tantan.

### 📤 Processamento:

Calcular a distância da coordenada atual para cada uma das três vilas.

### 📤 Saída:

Três linhas contendo a distância para cada vila, aproximada em **duas casas decimais**:

* `Distancia para Hogsmeade: H`
* `Distancia para Kakariko: K`
* `Distancia para Solitude: S`

### 📌 Exemplo

**Entrada**:
56 110

**Saída**:
Distancia para Hogsmeade: 112.18
Distancia para Kakariko: 123.43
Distancia para Solitude: 356.05

---

## 4. Média de Sequência (Alocação Dinâmica)

Crie um programa que tenha uma função que receba uma sequência de inteiros  e seu tamanho , e devolva o valor real indicando a média dos valores.
**Obs.:** O *array* deve ser criado já com o tamanho necessário por uma **função implementada com alocação dinâmica**.

### 📥 Entrada:

* Primeira linha: tamanho  da sequência.
* Próximas  linhas: os itens que compõem a sequência. (A leitura deve ser feita no programa principal).

### 📤 Saída:

Um número real com duas casas pós-vírgula indicando a média dos valores.

### 📌 Exemplo

**Entrada**:
3
10
20
30

**Saída**:
20.00

---

## 5. Situação do Aluno

Faça um programa que leia quatro notas (reais) de um aluno, calcule sua média ponderada (pesos 1, 2, 3 e 4, respectivamente) e imprima a situação utilizando uma função chamada `AnalisarSituacao`.

**Critérios:**

* **Aprovado com louvor:** média 
* **Aprovado:** média 
* **Reprovado:** média 
* **Prova final:**  média 

### 📥 Entrada:

Quatro números reais em uma mesma linha separados por espaço.

### 📤 Saída:

A mensagem correspondente à situação do aluno (todas em minúsculo, conforme exemplo).

### 📌 Exemplo

**Entrada**:
1.0 2.0 3.0 10.0

**Saída**:
prova final

---

---

# Lista de Recursividade

## 6. Resto da Divisão (MOD) Recursivo

Em algumas linguagens existe o operador `MOD` ou `%`. Pode-se calcular o resto da divisão de  por  usando a seguinte definição recursiva:

* , se 
* , se 

Crie uma função recursiva que implemente essa definição. Utilize uma função auxiliar ou *built-in* para calcular o valor absoluto (`ABS`).

### 📥 Entrada:

Dois números inteiros,  e .

### 📤 Saída:

O valor do resto da divisão.

### 📌 Exemplo

**Entrada**:
5
4

**Saída**:
1

---

## 7. Contagem de Dígitos Pares

Escreva uma função recursiva chamada `ContaDigitosPares` que receba como entrada um número e retorne a quantidade de dígitos pares que o compõem.

### 📥 Entrada:

Um número inteiro.

### 📤 Saída:

Um número inteiro representando a contagem de dígitos pares.

### 📌 Exemplo

**Entrada**:
1204

**Saída**:
3

---

## 8. Série Recursiva F(n)

Elabore uma função recursiva que determine o -ésimo termo da série descrita abaixo:



Base:


### 📥 Entrada:

Números inteiros representando o índice  desejado.

### 📤 Saída:

O valor do termo correspondente na série.

### 📌 Exemplo

**Entrada**:
10

**Saída**:
83

---

## 9. Decimal para Binário (Recursivo)

Dado um número  na base decimal, escreva uma função recursiva que converte este número para binário, **retornando-o em uma string**.

### 📥 Entrada:

Um número inteiro decimal  ().

### 📤 Saída:

O número  em binário.

### 📌 Exemplo

**Entrada**:
17

**Saída**:
10001

---

## 10. Número de Armstrong

Um número de Armstrong é um número de  dígitos cuja a soma dos dígitos elevados a  é igual ao próprio número.
Exemplo: .

**Obs.:** Crie duas funções, uma para determinar o número de dígitos e outra para calcular a soma, **ambas recursivas**.

### 📥 Entrada:

Um inteiro  ().

### 📤 Processamento:

Verificar se o número obedece à regra de Armstrong usando recursão.

### 📤 Saída:

* A mensagem `"Armstrong"` se for um número de Armstrong.
* Caso contrário, imprima a soma resultante no formato: `soma: <valor>`.

### 📌 Exemplo

**Entrada 1**:
371
**Saída 1**:
Armstrong

**Entrada 2**:
13
**Saída 2**:
soma: 10