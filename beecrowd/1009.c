#include <stdio.h>
 
int main() 
{
    char nome;
    double salario, montante;
    
    scanf ("%s %lf %lf", &nome, &salario, &montante);
    
    double total = salario + (montante*0.15);
    printf ("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}