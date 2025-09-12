#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sanduiche;
    double queijo, presunto, carne;
    scanf ("%d", &sanduiche);
    queijo = sanduiche*0.1;
    presunto = sanduiche*0.05;
    carne = sanduiche*0.1;
    printf("%.2lf\n%.2lf\n%.2lf\n", queijo, presunto, carne);
	return 0;
}