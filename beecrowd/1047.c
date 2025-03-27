#include <stdio.h>

int main(){
    int hr0,min0,hrf,minf;
    scanf("%d %d %d %d",&hr0,&min0,&hrf,&minf);

    if(hrf==hr0 && minf==min0){
        hrf=24;
        minf=0;
    } else {
        hrf-=hr0;
        minf-=min0;
        if(minf<0) {
            hrf--;
            minf+=60;
        }
        if(hrf<0)
            hrf+=24;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hrf,minf);

    return 0;
}