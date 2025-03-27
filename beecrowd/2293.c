#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    if(n < 1 || n > 100 || m < 1 || m > 100)
        return 1;
    
    int prod[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &prod[i][j]);

    int somaN[n], somaM[m];
    for(int i = 0; i < n; i++)
        somaN[i] = 0;
    for(int j = 0; j < m; j++) 
        somaM[j] = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            somaN[i] += prod[i][j];
            somaM[j] += prod[i][j];
        }

    int maiorN = somaN[0], maiorM = somaM[0];

    for(int i = 1; i < n; i++)
        if(somaN[i] > maiorN)
            maiorN = somaN[i];
    
    for(int j = 1; j < m; j++)
        if(somaM[j] > maiorM)  
            maiorM = somaM[j];

    if(maiorM > maiorN)
        printf("%d\n", maiorM);
    else printf("%d\n", maiorN);    

    return 0;
}
