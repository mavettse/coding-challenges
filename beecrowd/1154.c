#include <stdio.h>

int main () {

    int x;
    double numeros = 0;
    double quantidade = 0;
    double media = 0;

    while(1) {
        scanf("%d", &x);
        if(x < 0) {
            media = numeros/quantidade;
            printf("%.2lf\n", media);
            break;
        }
        quantidade ++;
        numeros += x;
    }

    return 0;
}