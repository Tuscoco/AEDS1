#include <stdio.h>
#define PI 3.14
int main ()
{
    double raio;
    printf("Qual o raio do circulo?\n");
    scanf("%lf",&raio);
    printf("A circunferencia mede:%lf",raio*PI*2);
    printf("\nA area mede:%lf",raio*raio*PI);
    return 0;
}