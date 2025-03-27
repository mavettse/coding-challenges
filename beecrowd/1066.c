#include <stdio.h>


int main() {

    int numeros[5];
    int par=0, impar=0, pos=0, neg=0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        if(numeros[i] % 2 == 0) {
            par++;
        } else impar++;
        if(numeros[i] > 0) { 
            pos++;
        }
        if(numeros[i] < 0) {
            neg++;
        }
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par,impar, pos, neg);

    return 0;
}