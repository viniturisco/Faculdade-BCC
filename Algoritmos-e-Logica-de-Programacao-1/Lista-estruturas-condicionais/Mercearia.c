#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int cod, quant;
    double unit, valor;
    scanf("%d%d", &cod, &quant);
    switch (cod){
        case 1: unit=5.30;break;
        case 2: unit=6.00;break;
        case 3: unit=3.20;break;
        default: unit=2.50;
    }
    valor=unit*quant;
    if(quant>=15||valor>=40){
        valor=valor*0.85;
        printf("R$ %.2lf\n", valor);
    }
    else {
        printf("R$ %.2lf\n", valor);
    }
    return 0;
}
