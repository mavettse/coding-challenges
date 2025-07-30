#include <stdio.h>

int main() {
    
    int n;
    do {
        scanf("%d", &n);
    } while (n <= 5 || n >= 2000);

    int i;
    int resultado;
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            resultado = i*i;
            printf("%d^2 = %d\n", i, resultado);
        }
    }

    return 0;
}