#include <stdio.h>

int main() {
    float a, b, x;

    printf("Digite o coeficiente 'a' da equacao (ax + b = 0): ");
    scanf("%f", &a);

    printf("Digite o coeficiente 'b' da equacao (ax + b = 0): ");
    scanf("%f", &b);

    if (a != 0) {
        x = -b / a;
        printf("A raiz da equacao %.2fx + %.2f = 0 eh: %.2f\n", a, b, x);
    } else {
        printf("Coeficiente 'a' deve ser diferente de zero para ser uma equacao do primeiro grau.\n");
    }

    return 0;
}
