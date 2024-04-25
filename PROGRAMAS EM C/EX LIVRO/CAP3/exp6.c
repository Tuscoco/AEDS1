#include <stdio.h>
int main()
{
    double sf,v,c,s;
    
    printf("Digite seu salario fixo:\n");
    scanf("%lf",&sf);
    printf("Digite o valor total das suas vendas:\n");
    scanf("%lf",&v);

    c=v*4/100;
    s=sf+c;

    printf("Comissoes:%.2lf",c);
    printf("\nSalario final:%.2lf",s);

    return 0;
}