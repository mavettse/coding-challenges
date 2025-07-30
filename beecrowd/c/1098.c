#include <stdio.h>

int main() {
    
    double i = 0;
    double j = 1;

    while(i <= 2) {
        printf("I=%g J=%g\n", i, j);
        j++;
        printf("I=%g J=%g\n", i, j);
        j++;
        printf("I=%g J=%g\n", i, j);
        j -= 2;
        j += 0.2;
        i += 0.2;
        
    }

    return 0;
}