#include <stdio.h>

void numPerfeito(int X) {
    int soma = 0;
    for(int i = 1; i < X; i++) {
        if(X%i == 0)
            soma += i;
    } if (soma == X)
        printf("%d eh perfeito\n", X);
    else printf("%d nao eh perfeito\n", X);
}

int main () {
    int N, X;

    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &X);
        numPerfeito(X);
    }
    
    return 0;
}