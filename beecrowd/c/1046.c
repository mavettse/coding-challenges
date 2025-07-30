#include <stdio.h>

int main () {

    int h0, hf;
    scanf("%d %d", &h0, &hf);

    int semenor24 = 24-h0+hf;
    int semaior24 = hf-h0;

    if(semenor24<=24) {
        printf("O JOGO DUROU %d HORA(S)\n", semenor24);
   } else { printf("O JOGO DUROU %d HORA(S)\n", semaior24);
   }
   
    return 0;
}