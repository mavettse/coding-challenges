#include <stdio.h>
#include <math.h>

void ordenaValores(double *a, double *b, double *c){
    double temp;
    if(*a<*b){
        temp=*a;
        *a=*b;
        *b=temp;
    }
    if(*a<*c){
        temp=*a;
        *a=*c;
        *c=temp;
    }
    if(*b<*c){
        temp=*b;
        *b=*c;
        *c=temp;
    } // a > b > c
}

void tipoTriangulo(double a, double b, double c){
    if(a>=b+c){
        printf("NAO FORMA TRIANGULO\n");
        return;
    }
    else if(pow(a,2)==pow(b,2)+pow(c,2))
        printf("TRIANGULO RETANGULO\n");
    else if(pow(a,2)>pow(b,2)+pow(c,2))
        printf("TRIANGULO OBTUSANGULO\n");
    else printf("TRIANGULO ACUTANGULO\n");
    
    if(a==b && b==c)
        printf("TRIANGULO EQUILATERO\n");
    else if (a==b || a==c || b==c)
        printf("TRIANGULO ISOSCELES\n");
}

int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);

    ordenaValores(&a,&b,&c);
    tipoTriangulo(a,b,c);

    return 0;
}