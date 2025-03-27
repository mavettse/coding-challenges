#include <stdio.h>
#include <math.h>

void areaCirculo(int r1, int x1, int y1, int r2, int x2, int y2){
    double distancia = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    if(r1 > r2 && distancia + r2 <= r1) {
        printf("RICO\n");
    }
    else
        printf("MORTO\n");
}

int main(){
    int r1, x1, y1, r2, x2, y2;
    while(scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2) != EOF){
        areaCirculo(r1,x1,y1,r2,x2,y2);
    }
    return 0;
}