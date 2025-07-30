#include <stdio.h>

int main () {

    int X, Y; 
    scanf("%d %d", &X, &Y);

    if(X > Y) {
        int temp = X; 
        X = Y; 
        Y = temp;
    }

    for(int i = X; i < Y - 1; i++) {
        int imaisum = i + 1;
        if(imaisum % 5 == 2 || imaisum % 5 == 3) {
            printf("%d\n", imaisum);
        }
    }

    return 0; 
}