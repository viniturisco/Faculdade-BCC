#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A, B, C, D;
    int AB, CD, result;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    AB = A*B;
    CD = C*D;
    result = AB-CD;
    printf("DIFERENCA = %d\n", result);
	return 0;
}