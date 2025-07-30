#include <stdio.h>
 
int main() {
    
    int num, horas;
    scanf ("%d %d", &num, &horas);
    
    double valor;
    scanf ("%lf", &valor);
    
    double salario = horas * valor;
    printf ("NUMBER = %d\nSALARY = U$ %.2lf\n", num, salario);
 
    return 0;
}