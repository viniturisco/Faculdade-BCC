#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numero, algarismo;
    scanf("%d", &numero);
    algarismo = numero%10; 
    printf("%d\n", algarismo);
	return 0;
}