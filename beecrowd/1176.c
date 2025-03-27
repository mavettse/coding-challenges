#include <stdio.h>

void fib(int n){
    unsigned long long int fibn = 0, fib1 = 0, fib0 = 1;
    for(int i = 0; i < n; i++){
        fibn = fib1 + fib0;
        fib0 = fib1;
        fib1 = fibn;
    }
    printf("Fib(%d) = %lld\n", n, fibn); 
}

int main(){
    int t;
    scanf("%d",&t);

    int n[t];

    for(int i = 0; i < t; ++i){
        scanf("%d", &n[i]);
        if(n[i] < 0 || n[i] > 60)
            return 1;
        fib(n[i]);
    }

    return 0;
}