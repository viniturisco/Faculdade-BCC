#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (){ 
    int D, R, L, P, G, dinheiro;
    scanf("%d %d %d %d %d", &D, &R, &L, &P, &G);
    dinheiro = R - (D - L*10)/10*G;
    if (D/(P + 1) > L*10 || (D - L*10)/10*G > R){
        printf("Nao pode viajar.\n");
    } else {
        printf("Pode viajar.\nR$: %d\n", dinheiro);
    }
    return 0;
}