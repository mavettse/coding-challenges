#include <stdio.h>

int main() {

    int X; 
    scanf("%d", &X);

    for(int i = 0; i < 6; i++) {
        if(X % 2 == 0) {
            printf("%d\n", X+1);
            X += 2;
        } else { printf("%d\n", X); 
                X += 2; }
    }

    return 0;
}