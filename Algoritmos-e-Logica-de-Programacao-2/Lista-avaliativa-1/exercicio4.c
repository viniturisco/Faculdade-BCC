#include<stdio.h>
#include<string.h>
int main () {
    char frases[101][101], maiorPalavra[101], aux[101];
    int x, y = 0, z, cont;
    do {
        scanf("%100[^\n]%*c", frases[y]);
        y++;
    } while(strcmp(frases[y - 1], "0") != 0);
    for (z = 0; z < y - 1; z++) { 
        cont = 0;
        for(x = 0; x <= strlen(frases[z]); x++) {
            if(frases[z][x] != ' ' && frases[z][x] != '\0') {
                cont++; 
                aux[cont - 1] = frases[z][x];
                aux[cont] = '\0';
            } else {
                if (cont > 0) {
                    printf("%d", cont);
                    if (frases[z][x] != '\0') {
                        printf("-");
                    }
                    if (strlen(aux) >= strlen(maiorPalavra)) {
                        strcpy(maiorPalavra, aux);
                    }
                    cont = 0;
                }
            }
        }
        printf("\n");
    }
    printf("Maior palavra: %s\n", maiorPalavra);
    return 0;
}
