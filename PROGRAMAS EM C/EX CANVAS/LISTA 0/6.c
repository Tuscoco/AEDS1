#include <stdio.h>

int main() {
    float primeiro_termo, razao, decimo_termo;

    printf("Digite o primeiro termo da PA: ");
    scanf("%f", &primeiro_termo);

    printf("Digite a razão da PA: ");
    scanf("%f", &razao);

    decimo_termo = primeiro_termo + 9 * razao;

    printf("Décimo termo da PA: %.2f\n", decimo_termo);

    return 0;
}
