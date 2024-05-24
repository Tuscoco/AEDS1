#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2,t;
    int n1=0,n2=1,aux;

    printf("Informe o numero de termos:\n");
    scanf("%d",&t);

    while(t <= 0)
    {
        printf("Numero invalido!\nInforme outro:\n");
        scanf("%d",&t);
    }

    if(t == 1)
    {
        printf("1\n");
        return 0;
    }

    if(t == 2)
    {
        printf("1\n2\n");
        return 0;
    }

    system("cls");

    printf("%d\n",n1);
    printf("%d\n",n2);

    for(i=2;i<t;i++)
    {
        aux = n1 + n2;
        n1 = n2;
        n2 = aux;

        printf("%d\n",aux);
    }

    return 0;
}