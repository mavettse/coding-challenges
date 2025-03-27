#include <stdio.h>

#define MAX 12

int main(){
    int l;
    char t;
    scanf("%d %c", &l, &t);

    double m[MAX][MAX];
    for(int i = 0; i < MAX; i++)
        for(int j = 0; j < MAX; j++)
            scanf("%lf", &m[i][j]);

    double soma = 0;
        for(int j = 0; j < MAX; j++)
            soma += m[l][j];
    
    switch(t){
        case 'M':
            soma /= 12;
            break;
        default: 
            break;
    }

    printf("%.1lf\n", soma);

    return 0;
}