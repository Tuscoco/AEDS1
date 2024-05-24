#include <stdio.h>
#include <stdlib.h>

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
    int n,resultado;

    printf("Informe o n:\n");
    scanf("%d",&n);

    resultado = fatorial(n);

    system("cls");

    printf("Fatorial de %d : %d\n",n,resultado);

    return 0;
}