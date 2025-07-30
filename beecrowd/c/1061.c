#include <stdio.h>

int main () {

    int diai, horai, minutoi, segundoi, diaf, horaf, minutof, segundof;

    scanf("Dia %d\n%d : %d : %d\nDia %d\n%d : %d : %d", &diai, &horai, &minutoi, &segundoi, &diaf, &horaf, &minutof, &segundof);

    int dia, hora, minuto, segundo;

    dia = diaf - diai;

    if(segundof < segundoi) {
        minutof--; 
        segundof+=60;
    }
    segundo = segundof - segundoi;

    if(minutof < minutoi) {
        horaf--;
        minutof+=60;
    }
    minuto = minutof - minutoi;

    if(horaf < horai) {
        dia--;
        horaf+=24;
    }
    hora = horaf - horai;     

    if(minuto<0) {
            hora--;
            minuto+=59;
        }

    if(hora<0) {
            dia--;
            hora+=23;
        }

        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, hora, minuto, segundo);

    return 0;
}
