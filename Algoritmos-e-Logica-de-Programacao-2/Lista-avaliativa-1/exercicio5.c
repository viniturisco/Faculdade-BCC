#include <stdio.h>
#include <string.h>
int main () {
    char string1[1001], string2[1001], v1[1001], v2[1001];
    int y = 0, z, aux;
    scanf("%1000[^\n]%*c", string1);
    scanf("%1000[^\n]%*c", string2);
    for (z = 0; z < strlen(string1); z++) {
        if (string1[z] > 64 && string1[z] < 91) {
            string1[z] = string1[z] + 32; 
        }
        if (string1[z] > 96 && string1[z] < 123) {
            v1[y] = string1[z];  
            y++;
        }
    }
    v1[y] = '\0';
    for (z = 0; z < strlen(v1) - 1; z++) {
        for (y = 0; y < strlen(v1) - z - 1; y++) {
            if (v1[y] > v1[y + 1]) {
                aux = v1[y];
                v1[y] = v1[y + 1];
                v1[y + 1] = aux;
            }
        }
    }
    y = 0;
    for (z = 0; z < strlen(string2); z++) {
        if (string2[z] > 64 && string2[z] < 91) {
            string2[z] = string2[z] + 32; 
        }
        if (string2[z] > 96 && string2[z] < 123) {
            v2[y] = string2[z];
            y++;
        }
    }
    v2[y] = '\0';
    for (z = 0; z < strlen(v2) - 1; z++) {
        for (y = 0; y < strlen(v2) - z - 1; y++) {
            if (v2[y] > v2[y + 1]) {
                aux = v2[y];
                v2[y] = v2[y + 1];
                v2[y + 1] = aux;
            }
        }
    }
    if (strcmp(v1, v2) == 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}