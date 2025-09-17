#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[51];
    double n1;
    double n2;
} boletim;

int main() {

    boletim *aluno = malloc(sizeof(boletim));
    int n = 0, z, x;
    double media = 0;

    while (scanf("%50[^\n]%*c", &aluno[n].nome)) {
        scanf("%lf%lf%*c", &aluno[n].n1, &aluno[n].n2);
        n++;
        aluno = realloc(aluno, (n + 1) * sizeof(boletim));
    }

    for (z = 0; z < n; z++) {
        if ((aluno[z].n1 + aluno[z].n2) / 2 > media) {
            media = (aluno[z].n1 + aluno[z].n2)/2;
            x = z;
        }
    }
    
    printf("%s", aluno[x].nome);
    free(aluno);
    return 0;
}