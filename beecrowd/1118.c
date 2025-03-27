#include <stdio.h>

int main () {

    double a, b;
    int X;

    while(1) {

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

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &X);
        while(X < 1 || X > 2) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &X);
        }
        if(X == 2) {
            break;
        }

    }

    return 0; 
}