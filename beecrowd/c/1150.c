#include <stdio.h>

int main () {

    int x, z;
    scanf("%d %d", &x, &z);

    while(z <= x) {
        scanf("%d", &z);
    }

    int numeros = 0;
    int soma = 0;
    for(int i = x; soma <= z; i++) {
        soma += i;
        numeros++;
    }

    printf("%d\n", numeros);

    return 0;
}