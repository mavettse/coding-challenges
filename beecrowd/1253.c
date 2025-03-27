#include <stdio.h>
#include <string.h>

void decodificar(char *texto, int deslocamento) {
    int i;
    int n = strlen(texto);
    for (i = 0; i < n; i++) {
        texto[i] = 'A' + ((texto[i] - 'A' - deslocamento + 26) % 26);
    }
    printf("%s\n", texto);
}

int main() {
    int N;
    scanf("%d", &N); 

    while (N--) {
        char texto[51];
        int deslocamento;
        
        scanf("%s", texto); 
        scanf("%d", &deslocamento); 
        
        decodificar(texto, deslocamento); 
    }

    return 0;
}
