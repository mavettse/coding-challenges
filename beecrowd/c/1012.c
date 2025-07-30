#include <stdio.h>
#include <math.h>
 
int main() {
    
    double A, B, C, pi = 3.14159;
    scanf ("%lf %lf %lf", &A, &B, &C);
    
    double tri = A*C/2;
    printf ("TRIANGULO: %.3lf\n", tri);

    double cir = pi * pow (C, 2);
    printf ("CIRCULO: %.3lf\n", cir);
    
    double tra = (A+B)*C/2;
    printf ("TRAPEZIO: %.3lf\n", tra);
    
    double qua = pow (B, 2);
    printf ("QUADRADO: %.3lf\n", qua);
    
    double ret = A*B;
    printf ("RETANGULO: %.3lf\n", ret);
    
    return 0;
}