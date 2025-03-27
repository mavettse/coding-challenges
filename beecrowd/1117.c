#include <stdio.h>

int main () {

    double a, b;

    scanf("%lf", &a);
    while(a < 0 || a > 10) {
        printf("nota invalida\n");
        scanf("%lf", &a);
    }

    scanf("%lf", &b);     
    while(b < 0 || b > 10) {
        printf("nota invalida\n"); 
        scanf("%lf", &b);
    }

    printf("media = %.2lf\n", (a+b)/2);

    return 0; 
}