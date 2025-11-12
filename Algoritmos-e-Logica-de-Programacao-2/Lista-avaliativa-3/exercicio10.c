#include <stdio.h>
#include <math.h>

int Num(int x){
    if(x < 10) return 1;
    return 1 + Num(x/10);
}
int soma(int x, int a){
    if(x < 10) return pow(x%10, a);
    return pow(x%10, a) + soma(x/10, a); 
}

int main(){
    int x, a;
    scanf("%d", &x);
    a = Num(x);
    if(soma(x, a) == x){
        printf("Armstrong\n");
    }
    else{
        printf("soma: %d\n", soma(x, a));
    }
    return 0;
}
