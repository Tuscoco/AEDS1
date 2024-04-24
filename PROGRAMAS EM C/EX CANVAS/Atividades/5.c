#include <stdio.h>
int main ()
{
    double kwg,s;
    printf("Qual o salario minimo?\n");
    scanf("%lf",&s);
    printf("Qual a quantidade de quilowatts gasto?\n");
    scanf("%lf",&kwg);
    printf("\nValor do kW:%lf",s/7);
    printf("\nValor a pagar:%lf",(s/7)*kwg);
    printf("\nValor com desconto:%lf",((s/7)*kwg)*0.9);
    return 0;
}