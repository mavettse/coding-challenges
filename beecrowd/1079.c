#include <stdio.h>

int main() {
    
    int N, i; 
    scanf("%d", &N);

    double a, b, c, media[N];
    for(i = 0; i < N; i++) {
        scanf("%lf %lf %lf", &a, &b, &c); 
        media[i] = (a*2 + b*3 + c*5)/10;
    }

    for(i = 0; i < N; i++) {
        printf("%.1lf\n", media[i]);
    }

    return 0;
}