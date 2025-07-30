#include <stdio.h>

int main(){

    int n,fib0=0,fib1=1,fibf=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("%d",fibf);
        if(i==n-1)
            printf("\n");
        else printf(" ");
        fib0=fib1;
        fib1=fibf;
        fibf=fib0+fib1;
    }

    return 0;
}