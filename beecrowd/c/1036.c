#include <stdio.h>
#include <math.h>

int main () {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double r1, r2, BqAC = pow(B,2) - 4*A*C;
    r1 = (-B + sqrt(BqAC))/(2*A);
    r2 = (-B - sqrt(BqAC))/(2*A);

    if(BqAC<0 || A==0) {
        printf("Impossivel calcular\n");
    } else {  
    printf ("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }

    return 0;
}