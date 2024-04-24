#include <stdio.h>
#define PI 3.14
int main ()
{
    double raio;
    printf("Qual o raio da esfera?\n");
    scanf("%lf",&raio);
    printf("A area mede:%lf",PI*raio*raio*4);
    printf("\nO volume mede:%lf",PI*raio*raio*raio*(4/3));
    return 0;
}