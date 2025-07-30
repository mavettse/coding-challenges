#include <stdio.h>

int main(){
    double salario,imposto=0;
    scanf("%lf",&salario);

    if(salario <= 2000) {
        printf("Isento\n");
        return 0;
    }
    else if(salario <= 3000)
        imposto = (salario-2000)*0.08;
    else if(salario <= 4500)
        imposto += (salario-3000)*0.18 + 80;
    else
        imposto += (salario-4500)*0.28 + 80 + 270;

    printf("R$ %.2lf\n", imposto);
    
    return 0;
}