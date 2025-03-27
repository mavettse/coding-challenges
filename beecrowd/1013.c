#include <stdio.h>
#include <stdlib.h>

int maiorValor(int a, int b){
    return (a+b+abs(a-b))/2;
}

int main(){
    int maior,a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    maior=maiorValor(a,b);
    maior=maiorValor(maior,c);
    printf("%d eh o maior\n",maior);

    return 0;
}