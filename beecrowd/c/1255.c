#include <stdio.h>
#include <string.h>

typedef struct{
    char letra[27];
    int repeticao[26];
} letra;

void inicializarEstrutura(letra *l){
    strcpy(l->letra, "abcdefghijklmnopqrstuvwxyz");
    for(int i = 0; i < 26; ++i)
        l->repeticao[i] = 0;
}

void tiraMaiuscula(char *string){
    for(int i = 0; i < strlen(string); ++i)
        if(string[i] >= 65 && string[i] <= 90)
            string[i] += 32;
}

void contaLetra(char *string, letra *l){
    for(int i = 0; i < strlen(string); ++i){ // se o caractere for uma letra, incrementa o contador de repetição da letra
        if(string[i] >= 97 && string[i] <= 122) 
            for(int j = 0; j < 26; ++j)
                if(string[i] == l->letra[j]){
                    l->repeticao[j]++;
                    break;
                }
    }

    int maior = 0;
    for(int i = 0; i < 26; ++i) //guardando qual foi o maior número de repetições
        if(l->repeticao[i] > maior)
            maior = l->repeticao[i];

    for(int i = 0; i < 26; ++i) //imprimindo, em ordem alfabética, a letra que mais se repetiu
        if(maior == l->repeticao[i])    
            printf("%c",l->letra[i]);

    printf("\n");
}

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    
    char linha[201];
    letra l;

    for(int i = 0; i < n; ++i){
        inicializarEstrutura(&l);
        
        fgets(linha, 201, stdin);
        linha[strcspn(linha, "\n")] = '\0';

        tiraMaiuscula(linha);
        contaLetra(linha, &l);
        fflush(stdin);
    }

    return 0;
}