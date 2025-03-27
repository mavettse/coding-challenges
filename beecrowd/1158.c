#include <stdio.h>

int main () {

    int n; 
    scanf("%d", &n); 

    int x, y, soma = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);

        for(int i = 0; i < y; i++) {

            if(x%2 != 0) {
                soma += x;
            } else i--;
            x++;
        }
        printf("%d\n", soma);
        soma = 0;
    }

    return 0;
}