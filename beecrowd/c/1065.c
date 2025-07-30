#include <stdio.h>


int main() {
    
    int numeros[5];
    int qtdpar = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numeros[i]);
        if(numeros[i] % 2 == 0) {
            qtdpar ++;
        }
    }
    
    printf("%d valores pares\n", qtdpar);

    return 0;
}