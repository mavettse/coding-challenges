#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char tipo[21];
    int validade;
} carnes;

void ordem(carnes *carne, int n){
    for(int i = 0; i < n-1; ++i)
        for(int j = i+1; j < n; ++j)
            if(carne[i].validade > carne[j].validade){
                carnes temp = carne[i];
                carne[i] = carne[j];
                carne[j] = temp;        
            }

    for(int i = 0; i < n; ++i){
        printf("%s", carne[i].tipo);
        if(i == n-1)
            printf("\n");
        else printf(" ");
    }
}

int main(){
    int n;
    while((scanf("%d",&n)) != EOF){
        getchar();
        carnes *carne = malloc(n*sizeof(carnes));

        for(int i = 0; i < n; ++i){
            scanf("%20s %d", carne[i].tipo, &carne[i].validade);
            getchar();
            carne[i].tipo[strcspn(carne[i].tipo, "\n")] = '\0';
        }

        ordem(carne, n);
        free(carne);
    }

    return 0;
}