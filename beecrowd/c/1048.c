#include <stdio.h>

int main () {

    double salario;
    scanf("%lf", &salario);

    double nsalario, reajuste, percentual;

    if(salario>=0 && salario<=400) {
        percentual=15;
        nsalario=salario*(1+percentual/100);
    }
    if(salario>400 && salario<=800) {
        percentual=12;
        nsalario=salario*(1+percentual/100);
    }
    if(salario>800 && salario<=1200) {
        percentual=10;
        nsalario=salario*(1+percentual/100);
    }
    if(salario>1200 && salario<=2000) {
        percentual=7;
        nsalario=salario*(1+percentual/100);
    }
    if(salario>2000) {
        percentual=4;
        nsalario=salario*(1+percentual/100);
    }

    reajuste=nsalario-salario;

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n", nsalario, reajuste, percentual);

    return 0;
}