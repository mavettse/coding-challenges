#include <stdio.h>
#include <string.h>

int main() {
    int N; // Número de casos de teste
    scanf("%d", &N);

    while (N--) {
        int K; // Número de pessoas no grupo
        scanf("%d", &K);

        char idiomas[K][21]; // Array para armazenar os idiomas (até 20 caracteres + terminador '\0')
        int todos_iguais = 1; // Flag para verificar se todos os idiomas são iguais

        // Lendo o idioma da primeira pessoa
        scanf("%s", idiomas[0]);

        // Lendo os idiomas das demais pessoas e verificando se são iguais ao primeiro
        for (int i = 1; i < K; i++) {
            scanf("%s", idiomas[i]);
            if (strcmp(idiomas[i], idiomas[0]) != 0) {
                todos_iguais = 0; // Se algum idioma for diferente, define a flag como 0
            }
        }

        // Se todos os idiomas forem iguais, imprime o idioma, senão imprime "ingles"
        if (todos_iguais) {
            printf("%s\n", idiomas[0]);
        } else {
            printf("ingles\n");
        }
    }

    return 0;
}
