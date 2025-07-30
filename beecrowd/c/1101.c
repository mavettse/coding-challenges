#include <stdio.h>

int main() {

int M, N;


while(1) {

    scanf("%d %d", &M, &N);

    if(M <= 0 || N <= 0) {
        break;
    }

    if(M > N) {
        int temp = M; 
        M = N;
        N = temp;
    }

    int soma = 0;
    for(int i = M; i <= N; i++) {
        
        soma += i;

        printf("%d ", i);
        
        if(i == N) {
            printf("Sum=%d\n", soma);
        }

    }

}

return 0;
}
