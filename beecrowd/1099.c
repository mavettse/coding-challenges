#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int X[N], Y[N];
    for(int i = 0; i < N; i++) {
        
        scanf("%d %d", &X[i], &Y[i]);

        if(X[i] > Y[i]) {
            int temp = X[i];
            X[i] = Y[i]; 
            Y[i] = temp;
        }

    }

    for(int i = 0; i < N; i++) {

        int Xmum = X[i] + 1;
        int impares = 0;
        while(Xmum < Y[i]) {

            if(Xmum % 2 > 0) {
                impares += Xmum;
            } 
            
            Xmum++;

        }

        printf("%d\n", impares);

    }

    return 0;
}