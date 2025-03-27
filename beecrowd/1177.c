#include <stdio.h>

int main(){
    int t, n[1000];
    scanf("%d",&t);
    if(t < 2 || t > 50)
        return 1;
    int x = t-1;

    for(int i = 0; i < 1000; ++i){
        printf("N[%d] = %d\n", i, i%t);
    }

    return 0;
}