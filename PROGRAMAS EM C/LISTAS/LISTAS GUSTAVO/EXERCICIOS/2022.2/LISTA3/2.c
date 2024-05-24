#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i=0,n;
    double resultado=0;

    printf("Informe o numero de vezes que sera repetido:\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        resultado += pow(2,(-i));
    }

    system("cls");

    printf("Resultado: %.2lf\n",resultado);

    return 0;
}