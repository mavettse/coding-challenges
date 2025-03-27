#include <stdio.h>

int main(){
    int hr,min,seg;
    scanf("%d",&seg);
    
    hr=seg/3600;
    seg%=3600;
    min=seg/60;
    seg%=60;

    printf("%d:%d:%d\n",hr,min,seg);

    return 0;
}