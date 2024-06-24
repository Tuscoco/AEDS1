#include <stdio.h>

int main() {
    float numerador, denominador, resultado;

    printf("Digite o numerador: ");
    scanf("%f", &numerador);

    printf("Digite o denominador: ");
    scanf("%f", &denominador);

    if (denominador != 0) {
        resultado = numerador / denominador;
        printf("Resultado: %.2f\n", resultado);
    } else {
        printf("Erro: Divisão por zero não é permitida.\n");
    }

    return 0;
}
