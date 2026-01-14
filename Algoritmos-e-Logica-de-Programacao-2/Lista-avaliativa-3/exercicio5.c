#include <stdio.h>
char* AnalisarSituacao(float n[]) {
    float media = 0;
    for (int i = 0; i < 4; i++) {
        n[i] = n[i] * (i + 1);
        media += n[i];
    }
    media /= 10;
    if (media >= 9) return "aprovado com louvor";
    else if (media >= 7) return "aprovado";
    else if (media >= 3) return "prova final";
    else return "reprovado";
}
int main() {
    int i;
    float n[4];
    for (i = 0; i < 4; i++) scanf("%f", &n[i]);
    printf("%s\n", AnalisarSituacao(n));
    return 0;
}