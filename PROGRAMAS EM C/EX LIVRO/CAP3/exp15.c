#include <stdio.h>

int main()
{
    double salario,conta1,conta2,c1,c2,salarior;

    printf("Informe seu salario:\n");
    scanf("%lf",&salario);
    printf("Informe o valor das duas contas:\n");
    scanf("%lf %lf",&conta1,&conta2);

    c1=conta1*2/100;
    c2=conta2*2/100;
    salarior=salario-((conta1+c1)+(conta2+c2));

    printf("O salario restante eh:%.2lf",salarior);

    return 0;
}