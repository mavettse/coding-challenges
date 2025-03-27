#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 40

void pokemon(char s[][MAX], long n){
    long pokemon = 0, i, j;
    
    for(i=0; i<n; ++i){
        bool unico = true;
        for(j=0; j<i; ++j){
            if(strcmp(s[j], s[i]) == 0){
                unico = !unico;
                break;
            }
        }
        if(unico)
            pokemon++;
    }

    printf("Falta(m) %ld pomekon(s).\n", 151 - pokemon);
}

int main(){
    long n, i;
    scanf("%ld", &n);
    getchar();
    char s[n][MAX];

    for(i=0; i<n; ++i){
        fgets(s[i], MAX, stdin);
        s[i][strcspn(s[i], "\n")] = '\0';
        fflush(stdin);
    }

    pokemon(s, n);

    return 0;
}