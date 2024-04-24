#include <stdio.h>
#define PI 3.14
int main ()
{
    double raio;
    printf("Qual o raio do circulo?\n");
    scanf("%lf",&raio);
    printf("Perimetro:%lf",raio*PI*2);
    printf("\nArea:%lf",raio*raio*PI);
    return 0;
}