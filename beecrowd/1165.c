#include <stdio.h>

void numPrimo(int X) {
    int soma = 0;
    for(int i = 1; i <= X; i++) {
        if(X%i == 0)
            soma++;
    }
    if(soma == 2)
            printf("%d eh primo\n", X);
        else printf("%d nao eh primo\n", X);
}

int main () {

    int N, X;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &X);
        numPrimo(X);
    }

    return 0;
}