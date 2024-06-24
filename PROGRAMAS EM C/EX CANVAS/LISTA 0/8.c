#include <stdio.h>

int main() {
    float A, B, temp;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    temp = A;
    A = B;
    B = temp;

    printf("Após a troca:\n");
    printf("Valor de A: %.2f\n", A);
    printf("Valor de B: %.2f\n", B);

    return 0;
}
