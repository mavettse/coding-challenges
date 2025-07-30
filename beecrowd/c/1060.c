#include <stdio.h>

int main() {

   double n1, n2, n3, n4, n5, n6;
   scanf("%lf %lf %lf %lf %lf %lf", &n1, &n2, &n3, &n4, &n5, &n6);

    int quant = 0;

   if (n1 > 0)
    { 
        quant ++;
    }
    if (n2 > 0)
    { 
        quant ++;
    }
    if (n3 > 0)
    { 
        quant ++;
    }
    if (n4 > 0)
    { 
        quant ++;
    }
    if (n5 > 0)
    { 
        quant ++;
    }
    if (n6 > 0)
    { 
        quant ++;
    }
    
    printf("%d valores positivos\n", quant);

    return 0;
}
