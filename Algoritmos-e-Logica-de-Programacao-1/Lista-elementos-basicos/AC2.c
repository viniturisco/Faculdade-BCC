#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int seg, d, h, m, rd, rh, rm;
    scanf("%d", &seg);
    d = seg/86400;
    rd = seg%86400;
    h = rd/3600;
    rh = rd%3600;
    m=rh/60;
    rm=rh%60;
    printf("%d\n%d\n%d\n%d\n", d, h, m, rm);
	return 0;
}