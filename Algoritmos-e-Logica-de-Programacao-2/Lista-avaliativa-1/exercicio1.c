#include <stdio.h>
#include <string.h>
int main () {
    char string[401], palavra[401];
    int y, z, aux;
    aux = 0;
    scanf("%400[^\n]", string);
    for (z = 0; z < strlen(string); z++) {
        if (string[z] == ' ') {
            aux = z;
        }
    }
    if (aux == 0) {
        printf("%s\n", string);
    } else {
        for(z = aux + 1, y = 0; z < strlen(string); z++, y++) {
            palavra[y] = string[z];
        }
        printf("%s\n", palavra);
    }
    return 0;
}