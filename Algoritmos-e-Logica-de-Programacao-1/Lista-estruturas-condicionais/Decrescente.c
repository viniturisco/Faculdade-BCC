#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, y, z, aux;
    scanf("%d %d %d", &x, &y, &z);
    if (y > x){
        aux = x;
        x = y;
        y = aux;
    } 
    if (z > x){
        aux = x;
        x = z;
        z = aux;
    }
    if (z > y){
        aux = z;
        z = y;
        y = aux;
    }
    printf("%d\n%d\n%d\n", x, y, z);
    return 0;
}