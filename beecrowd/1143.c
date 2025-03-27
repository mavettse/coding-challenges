#include <stdio.h>

int main () {

    int n; 
    scanf("%d", &n);

    for(int sequencia = 1; sequencia <= n; sequencia++) {
        printf("%d %d %d", sequencia, (sequencia*sequencia), (sequencia*sequencia*sequencia));
        printf("\n");
    }

    return 0; 
}