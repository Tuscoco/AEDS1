#include <stdio.h>
#include <math.h>

int main() {
    float base, altura, perimetro, area, diagonal;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);
    area = base * altura;
    diagonal = sqrt(base * base + altura * altura);

    printf("Perímetro: %.2f\n", perimetro);
    printf("Área: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
