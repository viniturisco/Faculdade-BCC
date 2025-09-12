#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int nasc, atual, idade;
    scanf("%d %d", &nasc, &atual);
    idade=atual-nasc;
    printf("%d\n", idade);
	return 0;
}