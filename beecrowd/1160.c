#include <stdio.h>

int main () {

    int t, pa, pb, tempo;
    double g1, g2;

    scanf("%d", &t);

    for(int i = 0; i<t; i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        tempo = 0;

        while(pa<=pb) {
            pa += pa*(g1/100.0);
            pb += pb*(g2/100.0);
            tempo++;

            if(tempo>100) {
                break;
            }
        }

        if(tempo>100) {
            printf("Mais de 1 seculo.\n");
        } else printf("%d anos.\n", tempo);

    }

    return 0;
}