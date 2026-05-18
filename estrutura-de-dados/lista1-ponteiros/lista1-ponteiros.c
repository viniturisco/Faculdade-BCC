#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int mat[10000][10000];

struct aluno_a {
    char nome[201];
    char disciplina[26];
    float nota;
};

#pragma pack(push,1)
struct aluno_b {
    char nome[201];
    char disciplina[26];
    float nota;
};
#pragma pack(pop)

struct aluno_c {
    char *nome;
    char *disciplina;
    float nota;
};

///****************************************************************************
void trataAluno_c2(int size)
{
    struct aluno_c **alunos;
    alunos = (struct aluno_c**) malloc(sizeof(struct aluno_c *) * size);
    for (int i =0; i < size; i++) {
        alunos[i] = (struct aluno_c *) malloc(sizeof(struct aluno_c));
        alunos[i]->nome = (char*) malloc(sizeof(char) * 201);
        alunos[i]->disciplina = (char*) malloc(sizeof(char) * 26);
    }
    for (int i = 0; i < size; i++) {
        free(alunos[i]->nome);
        free(alunos[i]->disciplina);
        free(alunos[i]);
    }
    free(alunos);
}

///****************************************************************************
void trataAluno_c1(int size)
{
    struct aluno_c *alunos;
    alunos = (struct aluno_c*) malloc(sizeof(struct aluno_c) * size);
    for (int i =0; i < size; i++) {
        alunos[i].nome = (char*) malloc(sizeof(char) * 201);
        alunos[i].disciplina = (char*) malloc(sizeof(char) * 26);
    }
    for (int i = 0; i < size; i++) {
        free(alunos[i].nome);
        free(alunos[i].disciplina);
    }
    free(alunos);
}

///****************************************************************************
void trataAluno_b()
{
    struct aluno_b alunos[4];
    printf("Cada estrutura ocupa %d bytes\n", sizeof(struct aluno_b));
    printf("A variável array inicia no endereço de memória %d\n", (int) alunos);
}

///****************************************************************************
void trataAluno_a()
{
    struct aluno_a alunos[4];
    printf("Cada estrutura ocupa %d bytes\n", sizeof(struct aluno_a));
    printf("A variável array inicia no endereço de memória %d\n", (int) alunos);
}

///****************************************************************************
void trataAluno_a2()
{
    struct aluno_a *a1 = (struct aluno_a*) malloc(sizeof(struct aluno_a));
    struct aluno_a *a2 = a1;
    free(a1);
    free(a2);
}

///****************************************************************************
void trataAluno_a3()
{
    struct aluno_a a1;
    struct aluno_a *a2 = &a1;
    free(a2);
}

///****************************************************************************
void percorreLinha()
{
  for (int i =0; i < 10000; i++)
    for (int j = 0; j < 10000; j++)
        mat[i][j] = 0;
}

///****************************************************************************
void percorreColuna()
{
  for (int j = 0; j < 10000; j++)
    for (int i =0; i < 10000; i++)
        mat[i][j] = 0;
}

///****************************************************************************
int main()
{
    setlocale(LC_ALL, ".utf8");
    trataAluno_a();
    trataAluno_b();
    trataAluno_c1(4);
    trataAluno_c2(4);
    trataAluno_a2();
    trataAluno_a3();

    clock_t begin, end;
    double timeSpent;

    begin = clock();
    percorreLinha();
    end = clock();
    timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Percorrer matriz por linha demora %f\n", timeSpent);

    begin = clock();
    percorreColuna();
    end = clock();
    timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Percorrer matriz por coluna demora %f\n", timeSpent);
    return 0;
}
