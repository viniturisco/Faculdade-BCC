#include <stdio.h>
#include <stdlib.h>
int mod(int x, int y) {
    if (y == 0) return -1;
    x = abs(x);
    y = abs(y);
    if (x < y) return x;
    else return mod(x - y, y);
}
int main (){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", mod(x, y));
    return 0;
}