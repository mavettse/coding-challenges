#include <stdio.h>

int main () {

    int X, Y; 
    scanf("%d %d", &X, &Y); 

    if(X > Y) {
        int temp = X; 
        X = Y; 
        Y = temp;
    }

    int soma = 0;
    while(X <= Y) {
        if(X % 13 != 0) {
            soma += X;
            X++;
        } else X++;
    }

    printf("%d\n", soma);

    return 0; 
}