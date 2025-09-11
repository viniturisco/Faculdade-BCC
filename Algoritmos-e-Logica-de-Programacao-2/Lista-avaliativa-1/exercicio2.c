#include<stdio.h>
#include<string.h>
int main () {
    int numTeste, y, z, numFrutas[21], contFrutas;
    float valores[21], totalPreco = 0, totalFrutas = 0;
    char frutas[101];
    scanf("%d", &numTeste);
    for (z = 0; z < numTeste; z++) {
        contFrutas = 1;
        scanf("%f", &valores[z]);
        scanf("%*c %100[^\n]", frutas);
        for (y = 0; y < strlen(frutas); y++) {
            if (frutas[y] == ' ') {
                contFrutas++;
            }
        }
        numFrutas[z] = contFrutas;
        totalFrutas += contFrutas;
        totalPreco += valores[z];
    }
    for(z = 1; z <= numTeste; z++) {
        printf("dia %d: %d kg\n", z, numFrutas[z-1]);
    }
    printf("%.2f kg por dia\n", totalFrutas/numTeste*1.0);
    printf("R$ %.2f por dia\n", totalPreco/numTeste*1.0);
    return 0;
}