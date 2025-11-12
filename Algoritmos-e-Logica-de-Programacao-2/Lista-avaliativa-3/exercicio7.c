#include <stdio.h>
int ContaDigitosPares(int n) {
    int x;
    if (n < 10) {
        if (n % 2 == 0) return 1;
        else return 0;
    }
    x = n % 10;
    if (x % 2 == 0) return 1 + ContaDigitosPares(n/10);
    else return 0 + ContaDigitosPares(n/10);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", ContaDigitosPares(n));
    return 0;
}