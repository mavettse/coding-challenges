#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int q[n];
    char t[n];
    int total=0, totalr=0, totals=0, totalc=0;
    double percr,percs,percc;

    for(int i = 0; i < n; i++){
        scanf("%d %c", &q[i], &t[i]);
        total+=q[i];
        if(t[i] == 'C')
            totalc += q[i];
        else if(t[i] == 'R')
            totalr += q[i];
        else if(t[i] == 'S')
            totals += q[i];
    }

    percr = (totalr*100.0)/total;
    percs = (totals*100.0)/total;
    percc = (totalc*100.0)/total;

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %\nPercentual de ratos: %.2lf %\nPercentual de sapos: %.2lf %\n", total, totalc, totalr, totals, percc, percr, percs);

    return 0;
}