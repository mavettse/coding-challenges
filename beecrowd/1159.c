#include <stdio.h>

int main () {

    int x, numeros = 0, soma = 0; 

    while(1) { 
        scanf("%d", &x);

        if(x == 0) {
            break;
        }

        for(int i = x; numeros != 5; i++) {
            if(i % 2 == 0) {
                soma += i;
                numeros++;
            }
        }

        printf("%d\n", soma);
        soma = 0;
        numeros = 0;
    }

    return 0;
}