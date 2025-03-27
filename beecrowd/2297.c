#include <stdio.h>

int main () {
    int r, teste = 0;

    while (1) {
        scanf ("%d", &r);
        if (r == 0) 
            break;

        int a, b,vencedor = 0;
        for (int i = 0; i < r; i++) {
            scanf("%d %d", &a, &b);
            vencedor += a - b;
        }

        printf ("Teste %d\n", ++teste);
        if (vencedor >= 0)
            printf ("Aldo\n\n");
        else printf ("Beto\n\n");

    }

    return 0;
}
