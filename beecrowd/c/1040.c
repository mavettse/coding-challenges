#include <stdio.h>

int main () {

    double n1, n2, n3, n4, nf, mediaf;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    double media = (n1*2 + n2*3 + n3*4 + n4*1)/10;
    printf("Media: %.1lf\n", media);

    if(media>=7) {
        printf("Aluno aprovado.\n");
    } else if(media<5) {
        printf("Aluno reprovado.\n");
    } else if(media>=5 && media<7) {
        printf("Aluno em exame.\n");
        scanf ("%lf", &nf);
        mediaf = (nf+media)/2;
        printf("Nota do exame: %.1lf\n", nf);
        if(mediaf>=5) {
            printf("Aluno aprovado.\nMedia final: %.1lf\n", mediaf);
        } else {
            printf("Aluno reprovado.\nMedia final: %.1lf\n", mediaf);
        }
    }

    return 0;
}