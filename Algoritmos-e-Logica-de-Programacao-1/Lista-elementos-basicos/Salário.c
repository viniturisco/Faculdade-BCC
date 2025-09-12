#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numero, horas;
    double valor_hora, salario;
    scanf("%d %d %lf", &numero, &horas, &valor_hora);
    salario = horas*valor_hora;
    printf("NUMBER = %d\n", numero);
    printf("SALARY = R$ %.2lf\n", salario);
	return 0;
}