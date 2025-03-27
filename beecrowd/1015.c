#include <stdio.h>
#include <math.h>

void distanciaPontos(double x1,double y1,double x2, double y2){
    double d = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("%.4lf\n",d);
}

int main(){
    double x1,x2,y1,y2;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);

    distanciaPontos(x1,y1,x2,y2);

    return 0;
}