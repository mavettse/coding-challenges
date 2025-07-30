#include <stdio.h>

int main () {

    int x;
    int alcool = 0, gasolina = 0, diesel = 0;

    while(1) {
        
        scanf("%d", &x);
        while(x < 1 || x > 4) {
            scanf("%d", &x);
        }
    
        if(x == 1) {
            alcool++;
        }
        if(x == 2) {
            gasolina++;
        }
        if(x == 3) {
            diesel++;
        }
        if(x == 4) {
            printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
            break;
        }

    }

    return 0; 
}