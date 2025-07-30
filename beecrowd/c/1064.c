#include <stdio.h>

int main() {
    double valores[6];
    int qtd_positivos = 0;
    double soma_positivos = 0.0;

    // Leitura dos valores e contagem dos positivos
    for (int i = 0; i < 6; i++) {
        scanf("%lf", &valores[i]);
        if (valores[i] > 0) {
            qtd_positivos++;
            soma_positivos += valores[i];
        }
    }

    // Cálculo da média dos valores positivos
    double media_positivos = soma_positivos / qtd_positivos;

    // Impressão da quantidade de valores positivos
    printf("%d valores positivos\n", qtd_positivos);

    // Impressão da média dos valores positivos com um dígito após o ponto decimal
    printf("%.1lf\n", media_positivos);

    return 0;
}
