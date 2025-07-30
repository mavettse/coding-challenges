#include <stdio.h>
#include <string.h>

void inverteString(char *string){
    int tamanho = strlen(string);
    char invertida[tamanho], *ptr = &string[tamanho - 1];

    for(int i = 0; i < tamanho; ++i, --ptr){
        invertida[i] = *ptr;
    }

    invertida[tamanho] = '\0';
    printf("%s%s\n", string, invertida);
}

void sequenciaEspelho(int b, int e){
    int casas = 2, dif = e-b, tamanho = 2;

    if(b/10 != 0){
        int temp = b;
        while(temp/10 != 0){
            casas++; temp/=10;
        }
    }

    if(e/10 != 0){
        int temp = e;
        while(temp/10 != 0){
            casas++; temp/=10;
        }
    }

    if(e-b > 1)
        tamanho = casas * (dif-1);

    char sequencia[tamanho];
    sequencia[0] = '\0';
    char numero[12];

    for (int i = b; i <= e; ++i) {
        sprintf(numero, "%d", i);
        strcat(sequencia, numero);
    }

    inverteString(sequencia);
}

int main(){
    int c, b, e;
    scanf("%d",&c);

    for(int i = 0; i < c; ++i){
        scanf("%d %d", &b, &e);
        sequenciaEspelho(b, e);
    }

    return 0;
}