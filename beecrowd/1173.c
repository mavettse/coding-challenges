#include <stdio.h> 

int main () {

    int V, N[10];

    scanf("%d", &V);
    N[0] = V;

    for(int i = 0; i < 10; i++) {
        if(i != 0)
            N[i] = N[i-1]*2;
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}