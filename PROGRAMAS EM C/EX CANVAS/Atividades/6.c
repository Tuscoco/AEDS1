#include <stdio.h>
#include <math.h>
int main ()
{
    double base,altura,perimetro,area,diagonal;
    printf("Qual a base do retangulo?\n");
    scanf("%lf",&base);
    printf("Qual a altura do retangulo?\n");
    scanf("%lf",&altura);
    perimetro = base+altura+base+altura;
    area = base*altura;
    diagonal = sqrt(base*base+altura*altura);
    printf("Perimetro:%lf",perimetro);
    printf("\nArea:%lf",area);
    printf("\nDiagonal:%lf",diagonal);
    return 0;
}