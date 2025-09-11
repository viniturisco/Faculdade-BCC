#include <stdio.h>
int main() {
    int num[1000], a, y, cont, z, contMaior, moda;
    a = 0; contMaior = 0; cont = 0;
    while (scanf("%d", &num[a]) == 1) {
        a++;
    }
    for (z = 0; z < a; z++) {
        for (y = z + 1; y < a; y++) {
            if (num[z] == num[y]) {
                cont++;
            }
        }
        if (contMaior < cont) {
            moda = num[z];
            contMaior = cont;
            cont = 0;
        }
    }
    printf("%d\n", moda);	
    return 0;
}