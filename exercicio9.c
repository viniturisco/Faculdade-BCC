#include <stdio.h>
char* binario(int n, char* num[], int* i) {
    if (n == 0) return num;
    binario (n/2, num, i);
    num[*i] = (n%2) + '0';
    (*i)++;
    num[i] = '\0';
    return num;
}
int main() {
    int n, i = 0;
    char num[10];
    scanf("%d", &n);
    printf("%s\n", binario(n, num[10], &i));
    return 0;
}