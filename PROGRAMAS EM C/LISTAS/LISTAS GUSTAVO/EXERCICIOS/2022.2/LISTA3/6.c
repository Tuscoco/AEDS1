#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int num)
{

    if(num == 1)
    {
        return 1;
    }

    return num * fatorial(num - 1);
}

int main()
{
    int i=0,n,x;
    double resultado=0;

    printf("Informe o n:\n");
    scanf("%d",&n);

    printf("Informe o x:\n");
    scanf("%d",&x);

    for(i=0;i<=n;i++)
    {
        resultado += (pow(x,(2*i+1)))/fatorial(2*i+1);
    }

    system("cls");

    printf("Resultado: %lf\n",resultado);

    return 0;
} 