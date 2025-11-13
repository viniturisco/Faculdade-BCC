#include <stdio.h>
#include <math.h>
int num(int n){
    if(n < 10) return 1;
    return 1 + num(n/10);
}
int soma(int n, int num){
    if(n < 10) return pow(n%10, num);
    return pow(n%10, num) + soma(n/10, num); 
}
int main(){
    int n;
    scanf("%d", &n);
    if(soma(n, num(n)) == n){
        printf("Armstrong\n");
    }
    else{
        printf("soma: %d\n", soma(n, num(n)));
    }
    return 0;
}