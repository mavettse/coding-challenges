#include <stdio.h>
#include <math.h>
 
int main() 
{
    double n;
    scanf ("%lf", &n);

    printf ("NOTAS:\n");  
    printf ("%.0lf nota(s) de R$ 100.00\n", floor(n/100));
    n = fmod (n, 100);
    printf ("%.0lf nota(s) de R$ 50.00\n", floor(n/50));
    n = fmod (n, 50);
    printf ("%.0lf nota(s) de R$ 20.00\n", floor(n/20));
    n = fmod (n, 20);
    printf ("%.0lf nota(s) de R$ 10.00\n", floor(n/10));
    n = fmod (n, 10);
    printf ("%.0lf nota(s) de R$ 5.00\n", floor(n/5));
    n = fmod (n, 5);
    printf ("%.0lf nota(s) de R$ 2.00\n", floor(n/2));
    n = fmod (n, 2);

    printf ("MOEDAS:\n");
    printf ("%.0lf moeda(s) de R$ 1.00\n", floor(n/1));
    n = fmod (n, 1);
    printf ("%.0lf moeda(s) de R$ 0.50\n", floor(n/0.5));
    n = fmod (n, 0.5);
    printf ("%.0lf moeda(s) de R$ 0.25\n", floor(n/0.25));
    n = fmod (n, 0.25);
    printf ("%.0lf moeda(s) de R$ 0.10\n", floor(n/0.1));
    n = fmod (n, 0.1);
    printf ("%.0lf moeda(s) de R$ 0.05\n", floor (n/0.05));
    n = fmod (n, 0.05);
    printf ("%.0lf moeda(s) de R$ 0.01\n", n/0.01);

    return 0;
}