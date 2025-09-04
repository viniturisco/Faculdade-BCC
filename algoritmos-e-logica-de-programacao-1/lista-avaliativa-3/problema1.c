#include<stdio.h>
int main () {
    int cont, veiculos;
    double valor;
    cont = 0; valor = 0;
    while (scanf("%d", &veiculos) && veiculos != 999) {
        if (veiculos > 2) {
            cont ++;
            valor = valor + (veiculos - 2) * 12.89; 
        }
    }
    printf("%.2lf\n%d\n", valor, cont);
    return 0;
}