#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ang1, ang2;
    double ang3;
    scanf("%d %d", &ang1, &ang2);
    ang3=180-ang1-ang2;
    printf("3o angulo=%lf\n", ang3);
	return 0;
}