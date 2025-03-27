#include<stdio.h>

int main(){

    int num[15],impar[5],par[5],nimpar=0,npar=0;
    
    for(int i=0;i<15;i++){
    
        scanf("%d",&num[i]);
        
        if(num[i]%2!=0){
            impar[nimpar]=num[i];
            nimpar++;
            if(nimpar==5){
                for(nimpar=0;nimpar<5;nimpar++){
                    printf("impar[%d] = %d\n",nimpar,impar[nimpar]);
                }
                nimpar=0;
            }
        } else {
            par[npar]=num[i];
            npar++;
            if(npar==5){
                for(npar=0;npar<5;npar++){
                    printf("par[%d] = %d\n",npar,par[npar]);
                }
                npar=0;
            }
        }
    }
    
    if(nimpar!=0){
        for(int i=0;i<nimpar;i++){
            printf("impar[%d] = %d\n",i,impar[i]);
        }
    }
    if(npar!=0){
        for(int i=0;i<npar;i++){
            printf("par[%d] = %d\n",i,par[i]);
        }
    }
    
    return 0;
}