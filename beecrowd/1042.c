#include <stdio.h>

void ordenaValores(int a, int b, int c){
    int temp;
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    } // a < c
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    } // a < b < c ou a < c < b
    if(b>c){
        temp=b;
        b=c;
        c=temp;
    } // a < b < c
    printf("%d\n%d\n%d\n\n",a,b,c);
}

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    ordenaValores(a,b,c); //sequência crescente
    printf("%d\n%d\n%d\n",a,b,c); //sequência que foram lidos

    return 0;
}