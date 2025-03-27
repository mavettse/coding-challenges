#include <stdio.h>
 
int main() {
 
    int dis;
    double gas;
    scanf ("%d %lf", &dis, &gas);
    
    double  consumo = dis/gas;
    printf ("%.3lf km/l\n", consumo);
 
    return 0;
}