#include <stdio.h>

int main() {
    
    int n;
    do {
        scanf("%d", &n);
    } while (n >= 10000);
    
    int x[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    for(int i = 0; i < n; i++) {
        if(x[i] == 0) {
            printf("NULL\n");
        }
        if(x[i] % 2 == 0 && x[i] != 0) {
            printf("EVEN ");
        } else if(x[i] % 2 != 0 && x[i] != 0) { printf("ODD "); 
        }
        if(x[i] > 0 && x[i] != 0) {
            printf("POSITIVE\n");
        } else if(x[i] < 0 && x[i] != 0) { printf("NEGATIVE\n");
        }
    }

    return 0;
}