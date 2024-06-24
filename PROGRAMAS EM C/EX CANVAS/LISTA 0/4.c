#include <stdio.h>
#include <math.h>

int main() {
    float raio, perimetro, area;
    const float PI = 3.14;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    perimetro = 2 * PI * raio;
    area = PI * raio * raio;

    printf("Perímetro: %.2f\n", perimetro);
    printf("Área: %.2f\n", area);

    return 0;
}
