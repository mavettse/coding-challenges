#include <stdio.h>
#include <string.h>

#define MAX1 10000
#define MAX2 1000000

int main(){
    char n1[MAX1], n2[MAX2];
    int caso = 0;

    while(scanf("%s %s", n1, n2) != EOF){
        if(strlen(n1) == 0 || strlen(n2) < strlen(n1))
            break;

        int qtd = 0, pos;
        printf("Caso #%d:\n", ++caso);
        char *temp = n2;

        while((temp = strstr(temp,n1)) != NULL){
            pos = temp - n2 + 1;
            temp += strlen(n1);
            qtd++;
        }

        if(qtd > 0)
            printf("Qtd.Subsequencias: %d\nPos: %d\n", qtd, pos);
        else printf("Nao existe subsequencia\n");

        printf("\n");
    }

    return 0;
}
