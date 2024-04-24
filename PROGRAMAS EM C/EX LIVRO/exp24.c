#include <stdio.h>

int main()
{
    double reais,dolar,marco,libra;

    printf("Digite o valor em reais:\n");
    scanf("%lf",&reais);

    dolar=reais*1.80;
    marco=reais*2;
    libra=reais*3.57;

    printf("Dolar:%.2lf",dolar);
    printf("\nMarco alemao:%.2lf",marco);
    printf("\nLibra esterlina:%.2lf",libra);

    return 0;
}