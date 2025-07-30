#include <stdio.h>
#include <string.h>

void concatenaChar(char* hexa, char* palavra){
    int num;
    sscanf(hexa, "%x", &num);
    char letra = (char)num;

    int pos = strlen(palavra);
    palavra[pos] = letra;
    palavra[pos + 1] = '\0';
}


int main () {
    int n; 
    scanf("%d",&n);

    char hexa[3], palavra[n+1];
    palavra[0] = '\0';
    
    for(int i = 0; i < n; ++i){
        scanf("%2s",hexa);
        concatenaChar(hexa, palavra);
    } 

    puts(palavra);

    return 0;
}