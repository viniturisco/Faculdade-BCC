#include <stdio.h>
int F(int n){
    if(n == 0) return 10;
    else if(n == 1) return 11;
    else if(n == 2) return 27;
    else return F(n-2) - F(n-3);
}
int main()
{
    int n;
    while(scanf("%d", &n)) printf("%d\n", F(n));
    return 0;
}
