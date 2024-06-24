#include <stdio.h>
#include <math.h>

#define PI 3.14159

void calcCircunferencia(float R, float *compr, float *area) {
    *compr = 2 * PI * R;
    *area = PI * pow(R, 2);
}

int main() {
    float raio, comprimento, area;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    calcCircunferencia(raio, &comprimento, &area);

    printf("\nComprimento da circunferencia: %.2f\n", comprimento);
    printf("Area da circunferencia: %.2f\n", area);

    return 0;
}
