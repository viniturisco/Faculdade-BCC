#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int N;
    scanf("%lld", &N);
    if(N == 0){
        printf("NULO\n");
    } else {
        if(N<0){
        printf("NEGATIVO ");
        } else {
        printf("POSITIVO ");
        }
        if(N%2 == 0){
        printf("PAR\n");
        } else {
        printf("IMPAR\n");
        }
    }
    return 0;
}