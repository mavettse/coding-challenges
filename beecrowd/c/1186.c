#include <stdio.h>
#include <string.h>

#define MAX 12

void resultado(char O, double m[][MAX]){
    double soma = 0;
    int elementos = 0;

    for(int i = 0; i < MAX; ++i)
        for(int j = 0; j < MAX; ++j)
            if(i+j > 11){
                soma += m[i][j];
                elementos++;
            }

    switch(O){
        case 'M':
            soma /= elementos;
            break;
        default:
            break;
    }

    printf("%.1lf\n",soma);
}

int main () {
    char O;
    double m[MAX][MAX];

    scanf("%c", &O);
    for(int i = 0; i < MAX; ++i)
        for(int j = 0; j < MAX; ++j)
            scanf("%lf", &m[i][j]);

    resultado(O, m);

    return 0;
}