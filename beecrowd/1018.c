#include <stdio.h>

int main(){
    int valor, cem, cinq, vin, dez, cin, dois, um;
    scanf("%d",&valor);

    cem=valor/100;
    cinq=(valor%100)/50;
    vin=((valor%100)%50)/20;
    dez=(((valor%100)%50)%20)/10;
    cin=((((valor%100)%50)%20)%10)/5;
    dois=(((((valor%100)%50)%20)%10)%5)/2;
    um=((((((valor%100)%50)%20)%10)%5)%2);

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",valor,cem,cinq,vin,dez,cin,dois,um);

    return 0;
}