#include <stdio.h>

#define MAX 12

int main(){
    int c;
    char t;
    scanf("%d %c", &c, &t);

    if(c < 0 || c > 11)
        return 1;

    double matriz[MAX][MAX];
    for(int i = 0; i < MAX; ++i)
        for(int j = 0; j < MAX; ++j)
            scanf("%lf", &matriz[i][j]);

    double soma = 0;
    for(int i = 0; i < MAX; ++i)
        soma += matriz[i][c];

    switch(t){
        case 'M':
            soma /= MAX;
        default: 
            break;
    }            

    printf("%.1lf\n", soma);

    return 0;
}