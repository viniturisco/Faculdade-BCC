#include <stdio.h>

int eh_primo(int x){
    int i=2;
    for(i=2; i < x; i++){
        if(x % i == 0) {
            return 0;
        }
    }
    return 1;
}

/*
void proximo_primo(x) {

}

void fat (z) {
    if (z > 0) return (z * fat(z-1));
    return 1;
}
*/

int main() {
    int entrada, x;
    while (eh_primo(x) != 0) x++;
    scanf("%d", &x);
    printf("%d\n", eh_primo(x));
    return 0;
}