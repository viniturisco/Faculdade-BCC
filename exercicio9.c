#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* B(int n) {
    char* binario = (char*)malloc(sizeof(char) * 65);
    int i = 0;
    int num = n;
    while (num > 0) {
        binario[i] = (num % 2) + '0';
        num = num / 2;
        i++;
    }
    binario[i] = '\0';
    int j = 0;
    int fim = i - 1; 
    char temp;
    while (j < fim) {
        temp = binario[j];
        binario[j] = binario[fim];
        binario[fim] = temp;
        j++;
        fim--;
    }
    return binario;
}
int main() {
    int n;
    char* p; 
    scanf("%d", &n);
    p = B(n);
    if (p != NULL) {
        printf("%s\n", p);
        free(p);
    }
    return 0;
}
