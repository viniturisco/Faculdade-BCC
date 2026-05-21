# 🎬 Oráculo de Filmes: Sistema Especialista com Árvore Binária

Um sistema de diagnóstico de filmes interativo (no estilo "Akinator") desenvolvido inteiramente em C para o terminal.

O grande diferencial deste projeto não é apenas adivinhar o filme que o usuário está pensando, mas sim a sua capacidade de **aprender dinamicamente**. Se o programa não souber a resposta, ele solicita as informações ao usuário, realoca os ponteiros e expande a sua base de conhecimento em tempo real.

## 📚 Contexto

Este projeto foi desenvolvido como um **Miniprojeto de Laboratório de Estrutura de Dados**  para a graduação em Ciência da Computação. O desafio consistia em construir um Sistema Especialista de Classificação utilizando os conceitos fundamentais de uma Árvore de Decisão Binária.

## 🚀 Lógica e Decisões de Arquitetura

O sistema foi arquitetado para ser leve e eficiente, focado na manipulação segura de ponteiros e memória. A estrutura base é composta por nós (`struct no`), onde os nós internos representam perguntas com resposta de Sim/Não, e as folhas representam a conclusão (o palpite do filme).

Destaques técnicos da implementação:

* **Complexidade de Busca e Inserção:** A navegação ocorre descendo pela árvore a partir do nó raiz. A cada etapa, o algoritmo decide se avança para o ponteiro da esquerda ou da direita. Isso garante uma complexidade de tempo de $O(h)$ nas operações, onde $h$ é a altura da árvore.


* **Expansão Dinâmica (Machine Learning Simbólico):** Ao errar um palpite (chegar a uma folha incorreta), a função `corrigirArvore` transforma o nó folha em uma nova pergunta. O sistema então aloca dinamicamente dois novos nós folha: o filme antigo e o novo filme ensinado pelo usuário, garantindo a expansão da árvore sem perda de dados.


* **Controle de Buffer e I/O:** Para evitar falhas de leitura no terminal, foram utilizadas técnicas avançadas de formatação no `scanf` (como a supressão de atribuição com `*`), garantindo que a entrada de dados (strings e caracteres isolados) ocorra sem o acúmulo de quebras de linha (`\n`) no buffer.
* **Gerenciamento Total de Memória:** Como a árvore cresce indefinidamente durante a execução, o projeto utiliza a função recursiva `liberaNo` para realizar o `free` de cada nó alocado via `malloc` de forma segura no encerramento do programa, evitando *memory leaks*.
* **Auditoria Visual:** Implementação de uma travessia em pré-ordem (`exibirPreOrdem`) para plotar a estrutura completa e hierárquica da árvore no terminal, facilitando o debug.

## 🛠️ Stack Tecnológica

* **Linguagem:** C 
* **Estruturas de Dados:** Árvores Binárias, Ponteiros, Structs.
* **Técnicas Algorítmicas:** Recursividade, Alocação Dinâmica de Memória.



## 🕹️ Como executar na sua máquina

Para testar o projeto e ensinar novos filmes ao sistema, basta clonar este repositório e compilar o código fonte.

1. Clone o repositório e acesse o diretório do projeto.
2. Compile o código utilizando o GCC:
```bash
gcc main.c -o main

```


3. Execute o programa gerado:
```bash
./main

```



---

*Projeto desenvolvido por Vinicius Turisco.*