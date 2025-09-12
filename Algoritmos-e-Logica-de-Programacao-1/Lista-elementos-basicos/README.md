# Lista de Elementos Básicos

## 1. Salário

Este programa lê o número de um funcionário, a quantidade de horas trabalhadas e o valor recebido por hora, calculando o salário total do funcionário.

### 📥 Entrada:
Dois números inteiros e um número com duas casas decimais, representando respectivamente:  
- Número do funcionário  
- Quantidade de horas trabalhadas  
- Valor que o funcionário recebe por hora  

### 📤 Processamento:
O programa multiplica o número de horas trabalhadas pelo valor da hora para calcular o salário do funcionário.

### 📤 Saída:
O programa imprime o número do funcionário e o salário formatado com duas casas decimais, seguindo o padrão:

- `NUMBER = <número do funcionário>`  
- `SALARY = R$ <salário>`

### 📌 Exemplo

**Entrada**:
25
100
5.50

**Saída**:
NUMBER = 25
SALARY = R$ 550.00

---
## 2. Média

Este programa lê duas notas de um aluno e calcula a média ponderada, considerando que a primeira nota tem peso 3.5 e a segunda nota tem peso 7.5.

### 📥 Entrada:
Dois números de ponto flutuante de uma casa decimal, representando as notas A e B do aluno.

### 📤 Processamento:
O programa calcula a média ponderada, utilizando os pesos indicados.

### 📤 Saída:
O programa imprime a média com cinco casas decimais, no formato:  
`MEDIA = <valor>`

### 📌 Exemplo

**Entrada**:
5.0
7.1

**Saída**:
MEDIA = 6.43182

---

## 3. Diferença

Este programa lê quatro valores inteiros e calcula a diferença entre o produto dos dois primeiros valores e o produto dos dois últimos valores.

### 📥 Entrada:
Quatro números inteiros A, B, C e D.

### 📤 Processamento:
O programa calcula a diferença usando a fórmula.

### 📤 Saída:
O programa imprime a diferença no formato:  
`DIFERENCA = <valor>`

### 📌 Exemplo

**Entrada**:
5
6
7
8

**Saída**:
DIFERENCA = -26

---

## 4. Comparando Laranjas

Este programa recebe a quantidade de laranjas que Soraia deseja comprar e calcula quantas dúzias ela vai adquirir e o valor total da compra.

### 📥 Entrada:
Um número inteiro representando a quantidade total de laranjas.

### 📤 Processamento:
O programa calcula:  
- Quantas dúzias completas de laranjas existem na quantidade desejada  
- O valor total da compra considerando que cada dúzia custa R$ 8,35 e cada laranja adicional custa proporcionalmente (R$ 8,35 / 12)

### 📤 Saída:
O programa imprime:  
1. A quantidade de dúzias (inteiro)  
2. O valor total (real com duas casas decimais)  

### 📌 Exemplo

**Entrada**:
23

**Saída**:
1
16.00

---


---

## 5. Cálculo da Idade

Este programa calcula a idade de uma pessoa com base no ano de nascimento e no ano atual.

### 📥 Entrada:
Dois números inteiros:  
- Ano de nascimento  
- Ano atual  

### 📤 Processamento:
O programa subtrai o ano de nascimento do ano atual para determinar a idade.

### 📤 Saída:
A idade da pessoa como um número inteiro, seguido de uma quebra de linha.

### 📌 Exemplo

**Entrada**:
1971
2016

**Saída**:
45

---

## 6. Antecessor e Sucessor

Este programa lê um número inteiro e imprime o seu antecessor e sucessor.

### 📥 Entrada:

Um número inteiro.

### 📤 Processamento:

O programa calcula:  
- Antecessor: número - 1  
- Sucessor: número + 1  

### 📤 Saída:

Os números antecessor e sucessor, separados por um espaço.

### 📌 Exemplo

**Entrada**:
4610

**Saída**:
4609 4611

---

## 7. Algarismo da Casa das Unidades

Este programa recebe um número inteiro e retorna o algarismo da casa das unidades. Se o número for negativo, o algarismo também será negativo.

### 📥 Entrada:
Um número inteiro.

### 📤 Processamento:
O programa obtém o algarismo da unidade usando a operação módulo 10. Mantém o sinal do número original.

### 📤 Saída:
O algarismo da casa das unidades como um número inteiro.

### 📌 Exemplo

**Entrada**:
45

**Saída**:
5


---

## 8. AC2

Este programa recebe um tempo em segundos e calcula quantos dias, horas, minutos e segundos ele representa.

### 📥 Entrada:
Um número inteiro representando o total de segundos.

### 📤 Processamento:
O programa converte os segundos em:  
- Dias: `segundos // 86400`  
- Horas: `(segundos % 86400) // 3600`  
- Minutos: `(segundos % 3600) // 60`  
- Segundos restantes: `segundos % 60`

### 📤 Saída:
O programa imprime cada valor em uma linha, na ordem: dias, horas, minutos e segundos.

### 📌 Exemplo

**Entrada**:
86400

**Saída**:
1
0
0
0


---

## 9. 3º Ângulo do Triângulo

Este programa calcula o terceiro ângulo de um triângulo conhecendo os dois ângulos internos fornecidos pelo usuário.

### 📥 Entrada:
Dois números inteiros, representando os dois ângulos internos do triângulo.

### 📤 Processamento:
O programa calcula o terceiro ângulo usando a fórmula:  
$3º Ângulo = 180 - Ângulo 1 + Ângulo 2$

### 📤 Saída:
O terceiro ângulo como número decimal com seis casas decimais, no formato:  
`3o angulo=<valor>`

### 📌 Exemplo

**Entrada**:
70
10

**Saída**:
3o angulo=100.000000


---

## 10. Sanduíches

Este programa calcula a quantidade de ingredientes necessários para produzir uma determinada quantidade de sanduíches.

### 📥 Entrada:
Um número inteiro representando a quantidade de sanduíches.

### ⚙️ Processamento:
Cada sanduíche utiliza:
- 2 fatias de queijo (50 g cada)
- 1 fatia de presunto (50 g)
- 1 hambúrguer (100 g)  

O programa multiplica a quantidade de sanduíches pelos ingredientes necessários e converte o resultado em quilos.

### 📤 Saída:
Três valores em kg, com duas casas decimais:
1. Quantidade de queijo  
2. Quantidade de presunto  
3. Quantidade de carne  

### 📌 Exemplo

**Entrada**:
10  

**Saída**:
1.00  
0.50  
1.00  
