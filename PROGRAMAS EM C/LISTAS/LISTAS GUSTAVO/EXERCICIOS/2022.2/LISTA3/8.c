#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,soma=0;
    int e1,razao,n;

    printf("Informe o primeiro elemento:\n");
    scanf("%d",&e1);

    printf("Informe a razao:\n");
    scanf("%d",&razao);

    printf("Informe o numero de elementos:\n");
    scanf("%d",&n);

    for(i=0;i<n-1;i++)
    {
        e1 *= razao;

        soma += e1;
    }

    system("cls");

    printf("Soma: %d\n",soma);

    return 0;
}