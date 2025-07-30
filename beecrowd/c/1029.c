#include <stdio.h>

int num_calls = 0; 

int fibonacci(int n) {
    num_calls++; 

    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int N;
    scanf("%d", &N); 

    while (N--) {
        int X;
        scanf("%d", &X); 

        num_calls = 0;
        int result = fibonacci(X); 

        printf("fib(%d) = %d calls = %d\n", X, num_calls - 1, result); 
    }

    return 0;
}
