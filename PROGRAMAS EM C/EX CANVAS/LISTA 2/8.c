#include <stdio.h>

int main()
{
    int n1=0,n2=1,aux=0;
    int l;

    printf("Informe um numero: ");
    scanf("%d",&l);

    while(l <= 0)
    {
        printf("Informe um numero: ");
        scanf("%d",&l);
    }

    while(aux < l)
    {
        printf(" %d--",aux);

        if(aux == 1)
        {
            printf(" %d--",aux);
        }

        aux = n1 + n2;
        n1 = n2;
        n2 = aux;
    }

    return 0;
}