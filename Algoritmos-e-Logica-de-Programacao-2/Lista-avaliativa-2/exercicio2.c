#include <stdio.h>

typedef struct {
    double motor;
    double susp;
    double turbo;
} carro;

int main() {
    int n, z;
    double media, nota[20] = {0};
    char nome[20][51];
    carro c[20];
    media = 0;
    scanf("%d", &n);

    for (z=0; z < n; z++) {
        scanf("%*c%50[^\n]%*c", nome[z]);
        scanf("%lf%lf%lf", &c[z].motor, &c[z].susp, &c[z].turbo);
        nota[z] = (c[z].motor * 5 + c[z].susp * 2 + c[z].turbo * 3) / 10;
        media += nota[z];
    }

    media = media/n;
    
    for (z = 0; z < n; z++) {
        if (nota[z] > media) {
            printf("%s\n", nome[z]);
        }
    }
    return 0;
}
