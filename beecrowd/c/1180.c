#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n < 1 || n > 1000)
        return 1;

    int x[n], menor = INT_MAX, posicao;

    for(int i = 0; i < n; ++i){
        scanf("%d", &x[i]);
        if(x[i] < menor){
            menor = x[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);

    return 0;
}