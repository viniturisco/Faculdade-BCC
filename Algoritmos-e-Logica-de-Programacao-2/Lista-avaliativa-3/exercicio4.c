#include <stdio.h>
double media (int L[100], int n) {
    int i;
    double soma = 0;
    for (i = 0; i < n; i++) {
        soma += L[i];
    }
    return soma/n;
}
int main() {
    int i, n, L[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &L[i]);
    }
    printf("%.2lf", media(L, n));
    return 0;
}