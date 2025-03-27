#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);

    int fatorial = n;

    for(int i = n-1; i > 1; i--) {
        fatorial *= i;
    }

    printf("%d\n", fatorial);

    return 0;
}