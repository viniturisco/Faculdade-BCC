#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (c>a+b || b>a+c || a>b+c){
        printf("Nao eh triangulo\n");
    } else if (a==b && b==c && c==a){
        printf("Equilatero\n");
    } else if (a==b || b==c || c==a){
        printf("Isosceles\n");
    } else {
        printf("Escaleno\n");
    }
    return 0;
}