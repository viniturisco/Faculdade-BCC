#include <stdio.h>
#include <string.h>
int main() {
    int qtdSenhas, y, z, cont = 0;
    scanf("%d%*c", &qtdSenhas);
    char senhas[51][101]; 
    for (z = 0; z < qtdSenhas; z++) {
        scanf("%50s", senhas[z]);
        for (y = 0; y < strlen(senhas[z]); y++) {
            cont++;
            if (48 > senhas[z][y] || (senhas[z][y] > 57 && 65 > senhas[z][y]) || senhas[z][y] > 90) {
                printf("Alguma senha eh invalida!\n");
                return 0;
            } else {
                switch(senhas[z][y]) {
                    case '0': senhas[z][y] = '6'; break;
                    case '1': senhas[z][y] = '7'; break;
                    case '2': senhas[z][y] = '9'; break;
                    case '3': senhas[z][y] = '8'; break;
                    case '4': senhas[z][y] = 'A'; break;
                    case '5': senhas[z][y] = '2'; break;
                    case '6': senhas[z][y] = 'B'; break;
                    case '7': senhas[z][y] = 'F'; break;
                    case '8': senhas[z][y] = '1'; break;
                    case '9': senhas[z][y] = 'C'; break;
                    case 'A': senhas[z][y] = '0'; break;
                    case 'B': senhas[z][y] = 'D'; break;
                    case 'C': senhas[z][y] = 'E'; break;
                    case 'D': senhas[z][y] = '3'; break;
                    case 'E': senhas[z][y] = '5'; break;
                    case 'F': senhas[z][y] = '4'; 
                }
            }
        }
    }
    for(z = 0; z < qtdSenhas; z++) {
        printf("-%s", senhas[z]);
    }
    printf(" %d\n", cont);
    return 0;
}