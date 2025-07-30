#include <stdio.h>

int main() {
    int n, teste = 0;

    while(1){
        scanf("%d",&n);
        if(n == 0)
            break;

        int j, z, diferenca = 0;
        printf("Teste %d\n", ++teste);

        for (int i = 0; i < n; i++){
            scanf("%d %d", &j, &z);
            diferenca += j-z;
            printf("%d\n", diferenca);
        }
        printf("\n");
    }

    return 0;
}