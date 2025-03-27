#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int x[n],contin=0;
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        if(x[i] >= 10 && x[i] <= 20)
            contin++;
        
    }

    printf("%d in\n%d out\n",contin,n-contin);

    return 0;
}