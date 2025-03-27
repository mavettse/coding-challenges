#include <stdio.h>
 
int main() 
{
    int velm, tgasto;
    scanf ("%d %d", &velm, &tgasto);
    
    double dist = velm*tgasto;
    
    double litros = dist/12;
    printf ("%.3lf\n", litros);
 
    return 0;
}