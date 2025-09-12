#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int laranjas, duzias, laranjaunitaria;
    double valorlaranja, valorduzia, valorfinal;
    scanf("%d", &laranjas);
    duzias = laranjas/12;
    valorduzia = duzias*8.35;
    laranjaunitaria = laranjas%12;
    valorlaranja = laranjaunitaria*8.35/12;
    valorfinal = valorduzia+valorlaranja;
    printf("%d\n", duzias);
    printf("%.2lf\n", valorfinal);
	return 0;
}