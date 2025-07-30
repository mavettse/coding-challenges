#include <stdio.h>

int main(){

    int t, a, b, c, d, e, num=0;
    scanf("%d %d %d %d %d %d",&t,&a,&b,&c,&d,&e);

    if(a==t)
        num++;
    if(b==t)
        num++;
    if(c==t)
        num++;
    if(d==t)
        num++;
    if(e==t)
        num++;
    
    printf("%d\n",num);

    return 0;
}