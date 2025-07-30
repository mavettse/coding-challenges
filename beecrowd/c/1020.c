#include <stdio.h>

int main(){
    int ano,mes,dia;
    scanf("%d",&dia);

    ano=dia/365;
    dia%=365;
    mes=dia/30;
    dia%=30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);

    return 0;
}