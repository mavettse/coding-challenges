#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void dancante(char *sentenca){
    sentenca[strcspn(sentenca, "\n")] = '\0';
    int n = strlen(sentenca), i;
    bool maiusculo = true;

    for(i = 0; i < n; ++i){
        if(sentenca[i] > 96 && sentenca[i] < 123){
            if(maiusculo)
                sentenca[i] -= 32;
            maiusculo = !maiusculo;
        } else if(sentenca[i] > 64 && sentenca[i] < 91){
            if(!maiusculo)
                sentenca[i] += 32;
            maiusculo = !maiusculo;
        }
    }
    puts(sentenca);
}

int main(){
    char sentenca[51];
    while(fgets(sentenca, 51, stdin) != NULL){
        fflush(stdin);
        dancante(sentenca);
    }
    return 0;
}