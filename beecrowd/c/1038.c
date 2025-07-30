#include <stdio.h>

int main () {

    int cod, qtd;
    scanf("%d %d", &cod, &qtd);

    double val;
    if (cod==1) {
        val=4;
    } else if (cod==2) {
        val=4.5;
    } else if (cod==3) {
        val=5;
    } else if (cod==4) {
        val=2;
    } else if (cod==5) {
        val=1.5;
    }
    
    double ttl;
    ttl=val*qtd;
    printf("Total: R$ %.2lf\n", ttl);

    return 0;
}