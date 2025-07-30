#include <stdio.h>

int main () {

    int inter, gremio;
    int X;
    int numgrenais = 0, empates = 0, venceumais = 0, totali = 0, totalg = 0;

    while(1) {

        scanf("%d %d", &inter, &gremio);

        if(inter == gremio) {
            empates++;
        } else if(inter > gremio) {
            totali++;
            venceumais++;
        } else if(inter < gremio) {
            totalg++;
            venceumais--; 
        }

        numgrenais++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &X);
        if(X == 2) {            

            printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", numgrenais, totali, totalg, empates);

            if(venceumais > 0) {
                printf("Inter venceu mais\n");
            } else if (venceumais < 0) {
                printf("Gremio venceu mais\n");
            } else printf("Nao houve vencedor\n");

            break;

        }

    }

    return 0; 
}