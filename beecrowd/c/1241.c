#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i = 0; i < n; ++i){
        char a[1001], b[1001];
        scanf("%1000s %1000s", a, b);

        bool encaixa = true;
        int strlen_a = strlen(a), strlen_b = strlen(b);
        if(strlen_b > strlen_a){
            printf("nao encaixa\n");
            continue;
        }

        char *ptr_a = &a[strlen_a - strlen_b], *ptr_b = b;

        while(*ptr_b != '\0')
            if(*ptr_a++ != *ptr_b++){
                encaixa = false;
                break;   
            }

        if(encaixa)
            printf("encaixa\n");
        else printf("nao encaixa\n");
    }

    return 0;
}