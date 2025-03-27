#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void num(char *cpf, int *digitos){
    int j = 0;
    for(int i = 0; i < strlen(cpf); ++i)
        if(cpf[i] >= '0' && cpf[i] <= '9')
            digitos[j++] = (cpf[i] - '0');
        else continue;
}

void segundoDigito(char *cpf, int *digitos){
    num(cpf, digitos);
    int soma = 0;

    for(int i = 0, j = 9; i < 9; ++i, --j)
        soma += (digitos[i]*j);

    if((soma%11 == digitos[10]) || (soma%11 == 10 && digitos[10] == 0))
        printf("CPF valido\n");
    else printf("CPF invalido\n");
}

void primeiroDigito(char *cpf, int *digitos){
    num(cpf, digitos);
    int soma = 0;

    for(int i = 0; i < 9; ++i)
        soma += (digitos[i]*(i+1));

    if((soma%11 == digitos[9]) || (soma%11 == 10 && digitos[9] == 0))
        segundoDigito(cpf, digitos);
    else printf("CPF invalido\n");
}

int main(){
    char cpf[15];
    int *digitos = malloc(12*sizeof(int));

    while((fgets(cpf, 15, stdin)) != NULL){
        primeiroDigito(cpf, digitos);
        int c;
        while((c = getchar()) != '\n' && c != EOF);
    }

    free(digitos);

    return 0;
}