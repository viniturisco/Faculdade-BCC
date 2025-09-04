#include<stdio.h>
int main () {
    int comp, voltas, x, y, soma, tempo, menor, ganhador;
    scanf("%d%d", &comp, &voltas);
    for (x=1; x <= comp; x++) {
        soma = 0;
        for (y=1; y <= voltas; y++) {
            scanf("%d", &tempo);
            soma += tempo;
        }
        if (soma < menor || comp == 1) {
            menor = soma;
            ganhador = x;
        }
    }
    printf("%d", ganhador);
    return 0;
}