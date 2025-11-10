#include <stdio.h>
int soma(int n) {
    int soma = 0;
    while (n != 0) {
        soma += n%10;
        n /= 10;
    }
    return soma;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", soma(n));
    return 0;
}