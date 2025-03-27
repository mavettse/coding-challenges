#include <stdio.h>

int main() {
    
    int i = 1;
    int j = 7;

    while(i <= 9) {
        printf("I=%d J=%d\n", i, j);
        j--;
        printf("I=%d J=%d\n", i, j);
        j--;
        printf("I=%d J=%d\n", i, j);
        j+=4;
        i+=2;
    }    

    return 0;
}