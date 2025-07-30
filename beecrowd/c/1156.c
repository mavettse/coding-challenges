#include <stdio.h>

int main () {

    double s = 0.0;
    double cima = 1.0; 
    double baixo = 1.0;

    for(int i = cima; i <= 39; i += 2) {
        s += cima/baixo;
        cima += 2.0;
        baixo *= 2.0;
    }

    printf("%.2lf\n", s);

    return 0;
}