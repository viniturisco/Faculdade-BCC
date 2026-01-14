# Lista Avaliativa 1

## 1. Última Palavra

Este programa deve ler uma *string* (frase) e imprimir apenas a última palavra contida nela.

### 📥 Entrada:

Uma frase contendo, no máximo, 400 caracteres.

### 📤 Processamento:

O programa deve ler a *string* completa, identificar a separação entre as palavras (espaços) e isolar a última palavra da sequência.

### 📤 Saída:

Uma única linha contendo a última palavra da frase digitada.

### 📌 Exemplo

**Entrada**:
Palavra

**Saída**:
Palavra

---

## 2. Consumo de Frutas

Dona Marta precisa calcular o consumo de frutas em sua casa e o valor gasto por dia. O programa deve processar uma lista de compras de vários dias, onde cada fruta pesa 1 kg, e calcular as médias finais.

### 📥 Entrada:

Um número inteiro  () indicando o número de testes (dias).
Para cada teste, duas linhas são fornecidas:

1. Um número de ponto flutuante  (), indicando o montante gasto no dia.
2. Uma linha contendo os nomes das frutas compradas, separados por espaço.

### 📤 Processamento:

Para cada dia, o programa deve contar a quantidade de frutas (considerando 1 kg por fruta) e armazenar o custo. Ao final dos  dias, deve-se calcular a média de quilos consumidos por dia e a média de dinheiro gasto por dia.

### 📤 Saída:

Para cada dia processado, imprima: `dia X: Y kg` (onde X é o número do dia e Y a quantidade de frutas).
Ao final, imprima:

* A média de consumo: `Z.ZZ kg por dia` (com 2 casas decimais).
* A média de gastos: `R$ W.WW por dia` (com 2 casas decimais).

### 📌 Exemplo

**Entrada**:
3
9.58
Mamao Maca Melao
2.65
Melancia
9.54
Pera Uva Goiaba

**Saída**:
dia 1: 3 kg
dia 2: 1 kg
dia 3: 3 kg
2.33 kg por dia
R$ 7.26 por dia

---

## 3. Criptografia de Senhas

Neg precisa de um sistema para criptografar suas senhas de redes sociais baseando-se em uma tabela de substituição específica. O sistema deve garantir que as senhas sejam compostas exclusivamente por letras maiúsculas e dígitos.

**Tabela de Decodificação:**
| Original | Cripto | Original | Cripto | Original | Cripto | Original | Cripto |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| 0 | 6 | 4 | A | 8 | 1 | C | E |
| 1 | 7 | 5 | 2 | 9 | C | D | 3 |
| 2 | 9 | 6 | B | A | 0 | E | 5 |
| 3 | 8 | 7 | F | B | D | F | 4 |

*Letras e números que não estão na tabela não devem ser modificados.*

### 📥 Entrada:

A quantidade de senhas a serem inseridas, seguida pelas senhas (uma em cada linha).
**Requisito:** As senhas devem ser compostas exclusivamente por letras maiúsculas e dígitos.

### 📤 Processamento:

O programa deve validar se a senha contém apenas caracteres permitidos (maiúsculas e dígitos). Se válida, aplica a substituição conforme a tabela. Também deve calcular a soma da quantidade de caracteres de todas as senhas.

### 📤 Saída:

* Em uma única linha, todas as senhas criptografadas juntas, separadas por um hífen `-`, seguidas pela soma total de caracteres.
* Caso contenha algum caractere inválido (diferente de maiúscula ou dígito), deve apresentar: `Alguma senha eh invalida!`.

### 📌 Exemplo

**Entrada**:
4
9890214A
2B356C98
IF87DIOO
C2837ABI

**Saída**:
-C1C697A0-9D82BEC1-I41F3I00-E918F0DI 32

---

## 4. Contagem de Caracteres

Matheus quer um programa que interprete frases enviadas por mensagem, onde cada palavra é representada pelo seu número de caracteres. O programa deve processar várias frases e, ao final, identificar a palavra com a maior quantidade de letras.

### 📥 Entrada:

Vários casos de teste.

* Cada linha contém uma *string* (frase) de tamanho 1 a 100 caracteres.
* A entrada é encerrada quando o número `0` for recebido.
* Não há mais de um espaço separando cada palavra.

### 📤 Processamento:

Para cada frase, contar os caracteres de cada palavra. Rastrear qual foi a maior palavra encontrada entre todas as frases processadas.
**Obs.:** Se houver palavras com números idênticos de caracteres (empate na maior palavra), considerar a última recebida.

### 📤 Saída:

* Para cada caso, exiba a quantidade de caracteres de cada palavra separada por hífen `-`.
* Ao final, exiba: `Maior palavra: <palavra>`

### 📌 Exemplo

**Entrada**:
i love you
coal is so dark
0

**Saída**:
1-4-3
4-2-2-4
Maior palavra: dark

---

## 5. Verificador de Anagramas

Faça um programa que identifica se uma frase é anagrama de outra. Duas *strings* são anagramas se usam exatamente as mesmas letras, desconsiderando espaços em branco, capitalização e pontuação específica.

### 📥 Entrada:

Duas *strings* para verificação.

* Deve-se ignorar letras maiúsculas (consideradas iguais às minúsculas).
* Deve-se ignorar espaços em branco.
* Deve-se ignorar os seguintes caracteres de pontuação: ponto (`.`), vírgula (`,`), exclamação (`!`) e interrogação (`?`).

### 📤 Processamento:

O programa deve limpar as entradas (remover espaços e pontuações citadas, padronizar caixa) e verificar se a contagem de cada letra é idêntica nas duas frases.

### 📤 Saída:

Um valor booleano (`True` ou `False`) indicando se as *strings* são anagramas.

### 📌 Exemplo

**Entrada**:
The earthquakes
That queer shake

**Saída**:
True