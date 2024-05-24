#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i=0;
    double resultado=0.0,sla;

    printf("Informe o numero de termos a serem calculados:\n");
    scanf("%d",&n);

    while(n <= 0)
    {
        printf("INVALIDO!\nInforme outro:\n");
        scanf("%d",&n);
    }

    for(i=0;i<=n;i++)
    {
        sla = i;
        resultado += (4/(2*sla)+1);
    }

    system("cls");

    printf("Pi = %lf\n",resultado);

    return 0;
}