#include <stdio.h>

int main() {
    
    int i, maiorvalor, posicao, num[100];
    maiorvalor = 0;
    for(i = 1; i <= 100; i++) {
        scanf("%d", &num[i]);
        if(num[i] > maiorvalor) {
            maiorvalor = num[i];
            posicao = i;
        } 
    }

    printf("%d\n%d\n", maiorvalor, posicao);

    return 0;
}