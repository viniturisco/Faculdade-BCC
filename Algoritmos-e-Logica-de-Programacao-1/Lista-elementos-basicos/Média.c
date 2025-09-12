#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double A, B, media;
    scanf("%lf %lf", &A, &B);
    media = (3.5*A+7.5*B)/11;
    printf("MEDIA = %.5lf", media);
	return 0;
} 