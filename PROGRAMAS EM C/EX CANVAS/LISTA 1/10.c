#include <stdio.h>

int main() {
    int velocidade_maxima, velocidade_motorista;
    int excesso_velocidade;

    printf("Digite a velocidade máxima permitida (em km/h): ");
    scanf("%d", &velocidade_maxima);

    printf("Digite a velocidade do motorista (em km/h): ");
    scanf("%d", &velocidade_motorista);

    if (velocidade_motorista <= velocidade_maxima) {
        printf("Motorista respeitou a lei.\n");
    } else {
        excesso_velocidade = velocidade_motorista - velocidade_maxima;

        if (excesso_velocidade <= 10) {
            printf("Multa a ser cobrada: R$ 50,00\n");
        } else if (excesso_velocidade <= 30) {
            printf("Multa a ser cobrada: R$ 100,00\n");
        } else {
            printf("Multa a ser cobrada: R$ 200,00\n");
        }
    }

    return 0;
}
