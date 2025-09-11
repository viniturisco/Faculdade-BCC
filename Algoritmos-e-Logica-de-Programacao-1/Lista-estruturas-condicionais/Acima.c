#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int cont;
	double a, b, c, media;
	scanf("%lf%lf%lf", &a, &b, &c);
	media = (a + b + c) /3;
	cont = 0;
	if(a>media){
		cont++;
	}
	if (b>media){
		cont++;
	}
	if (c>media){
		cont++;
	}
	printf("%d", cont);
	return 0;
}