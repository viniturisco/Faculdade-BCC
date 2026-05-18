#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
    char nome[255];
    struct no *esquerda;
    struct no *direita;
} no;

// função para alocar um novo nó com o nome do filme
no* alocaNo(char nome[255]) {
    no *novo = (no*) malloc(sizeof(no));
    strcpy(novo->nome, nome);
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
}

// aloca a pergunta padrão
no* alocaRaiz(no *filme1, no *filme2) {
    no *raiz = (no*) malloc(sizeof(no));
    strcpy(raiz->nome, "O filme é uma animação?");
    raiz->esquerda = filme1;
    raiz->direita = filme2;
    return raiz;
}

void corrigirArvore(no* noAtual) {
    printf("Qual filme você pensou? ");
    char nomeFilme[255];
    scanf(" %[^\n]s", nomeFilme);
    printf("Digite uma pergunta que diferencie %s de %s: ", nomeFilme, noAtual->nome);
    char novaPergunta[255];
    scanf(" %[^\n]s", novaPergunta);

    //criando os novos nós
    no* novoFilme = alocaNo(nomeFilme);
    no* filmeAtual = alocaNo(noAtual->nome);

    strcpy(noAtual->nome, novaPergunta);
    noAtual->esquerda = novoFilme;
    noAtual->direita = filmeAtual;

    printf("Obrigado por jogar! Sua resposta foi adicionada ao sistema!\n");
}

void perguntaFinal (no* noAtual) {
    (printf("\nO filme que você pensou é %s?\n", noAtual->nome));
    printf("Responda com S ou N: ");
    char resposta;
    scanf(" %c%*[^\n]", &resposta);
    if (resposta == 'S' || resposta == 's') {
        printf("Acertei de novo! Obrigado por jogar!\n");
        return;
    } else if (resposta == 'N' || resposta == 'n') {
        corrigirArvore(noAtual);
        return;
    } else {
        printf("Resposta inválida, por favor responda com S ou N.\n");
        perguntaFinal(noAtual);
    }
}

void rodarSistema(no* noAtual) {
    //checagem se chegou no fim da árvore
    if (noAtual->esquerda == NULL && noAtual->direita == NULL) {
        //rodar uma função pra finalizar
        //return
        perguntaFinal(noAtual);
        return;
    }
    printf("\n%s\n", noAtual->nome);
    printf("Responda com S ou N: ");
    char resposta;
    scanf(" %c%*[^\n]", &resposta);
    if (resposta == 'S' || resposta == 's') {
        rodarSistema(noAtual->esquerda);
    } else if (resposta == 'N' || resposta == 'n') {
        rodarSistema(noAtual->direita);
    } else {
        printf("Resposta inválida, por favor responda com S ou N.\n");
        rodarSistema(noAtual);
    }
}

void liberaNo(no* noAtual) {
    if (noAtual == NULL) {
        return;
    }
    liberaNo(noAtual->esquerda);
    liberaNo(noAtual->direita);
    free(noAtual);
}

int main () {

    //aloca a base do programa
    no* filme1 = alocaNo("Shrek");
    no* filme2 = alocaNo("Clube da Luta");
    no *raiz = alocaRaiz(filme1, filme2);

    //texto de apresentação do programa
    printf("\n\nSeja bem vindo ao SISTEMA DE DIAGNÓSTICO DE FILMES!\n");
    printf("\n- Pense em um filme e responda as perguntas com SIM ou NÃO, e o programa irá tentar adivinhar qual é o filme que você pensou.\n");
    printf("\n- Caso o programa não consiga adivinhar, você deve informar o nome do filme que você pensou, e uma pergunta que diferencie o filme que você pensou do filme que o programa sugeriu, e o programa irá adicionar essa informação na sua base de dados para poder acertar ele na próxima vez!\n");
    printf("\nVamos começar!\n");

    char resposta;
    do {
        rodarSistema(raiz);
        printf("\nDeseja jogar novamente? Responda com S ou N: ");
        scanf(" %c%*[^\n]", &resposta);
    }
    while (resposta == 'S' || resposta == 's');

    liberaNo(raiz);

    return 0;
}


