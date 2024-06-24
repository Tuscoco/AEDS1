#include <stdio.h>

int main() {
    int total_apartamentos = 75;
    float ocupacao_normal = 0.5; // 50%
    float ocupacao_promocional = 0.8; // 80%
    float valor_diaria_normal;
    float valor_diaria_promocional;
    float valor_total_promocional;
    float valor_total_normal;
    float diferenca;

    printf("Digite o valor normal da diária: ");
    scanf("%f", &valor_diaria_normal);

    valor_diaria_promocional = valor_diaria_normal * 0.75;

    int apartamentos_ocupados_normal = total_apartamentos * ocupacao_normal;
    int apartamentos_ocupados_promocional = total_apartamentos * ocupacao_promocional;

    valor_total_promocional = apartamentos_ocupados_promocional * valor_diaria_promocional;

    valor_total_normal = apartamentos_ocupados_normal * valor_diaria_normal;

    diferenca = valor_total_promocional - valor_total_normal;

    printf("\nValor da diária promocional: R$ %.2f\n", valor_diaria_promocional);
    printf("Valor total arrecadado com 80%% de ocupação e diária promocional: R$ %.2f\n", valor_total_promocional);
    printf("Valor total arrecadado com 50%% de ocupação e diária normal: R$ %.2f\n", valor_total_normal);
    printf("Diferença entre os valores arrecadados: R$ %.2f\n", diferenca);

    return 0;
}
