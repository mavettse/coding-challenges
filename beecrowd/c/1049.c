#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char subfilo[15], classe[15], come[15];

    fgets(subfilo, 15, stdin);
    fgets(classe, 15, stdin);
    fgets(come, 15, stdin);

    subfilo[strcspn(subfilo, "\n")] = '\0';
    classe[strcspn(classe, "\n")] = '\0';
    come[strcspn(come, "\n")] = '\0';

    if((strcmp(subfilo, "vertebrado")) == 0){
        if((strcmp(classe, "ave")) == 0)
            if((strcmp(come, "carnivoro")) == 0)
                printf("aguia\n");
            else 
                printf("pomba\n");
        else //se a classe não é ave, é mamífero
            if((strcmp(come, "onivoro")) == 0)
                    printf("homem\n");
            else 
                    printf("vaca\n");
    } else //se o subfilo não é vertebrado, é invertebrado
        if((strcmp(classe, "inseto")) == 0)
            if((strcmp(come, "hematofago")) == 0)
                printf("pulga\n");
            else printf("lagarta\n");
        else 
            if((strcmp(come, "hematofago")) == 0)
                printf("sanguessuga\n");
            else 
                printf("minhoca\n");

    return 0;
}