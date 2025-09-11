#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);
    if (x<y && x<z){
        printf("Primeiro produto\n");
    } else if (y<x && y<z){
        printf("Segundo produto\n", y);
    } else {
        printf("Terceiro produto\n", z);
    }
    return 0;
}