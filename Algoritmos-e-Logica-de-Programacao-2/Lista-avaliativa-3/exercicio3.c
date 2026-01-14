#include <stdio.h>
#include <math.h>

double dh(int x, int z) {
    return sqrt(pow((x - 34), 2.0) + pow((z - 220), 2.0));
}

double dk(int x, int z) {
    return sqrt(pow((x - 0), 2.0) + pow((z - 0), 2.0));
}

double ds(int x, int z) {
    return sqrt(pow((x - 140), 2.0) + pow((z - 456), 2.0));
}

int main() {
    int x, z;
    scanf("%d%d", &x, &z);
    printf("Distancia para Hogsmade: %.2lf\n", dh(x, z));
    printf("Distancia para Kakariko: %.2lf\n", dk(x, z));
    printf("Distancia para Solitude: %.2lf\n", ds(x, z));
    return 0;
}