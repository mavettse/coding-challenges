#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n); 

    for(int sequencia = 1; sequencia <= n*4; sequencia++) {
        if(sequencia % 4 == 0) {
        printf("PUM\n");
        } else printf("%d ", sequencia);       
    }

    return 0; 
}