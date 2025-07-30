#include <stdio.h>

int main () {

    int X, Y;
    while(1) {
        scanf("%d %d", &X, &Y);
        if(X < Y) {
            printf("Crescente\n");
        } else if(X > Y) {
            printf("Decrescente\n");
        } else break;
    }

    return 0; 
}