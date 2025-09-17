#include <stdio.h>

typedef struct {
    int real;
    int imag;
} complexo;

int main() {
    complexo c1, c2, soma, multi;
    scanf("%d%d", &c1.real, &c1.imag);
    scanf("%d%d", &c2.real, &c2.imag);

    soma.real = c1.real + c2.real;
    soma.imag = c1.imag + c2.imag;

    multi.real = c1.real * c2.real - c1.imag * c2.imag;
    multi.imag = c1.imag * c2.real + c2.imag * c1.real;

    printf("Soma: %d+%di\n", soma.real, soma.imag);
    printf("Multi: %d+%di\n", multi.real, multi.imag);
    
    return 0;
}