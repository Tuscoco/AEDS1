#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=0,n2=1,aux;
    int l,i;

    system("cls");

    printf("Informe a quantidade de termos: ");
    scanf("%d",&l);

    if(l <= 0)
    {
        return 0;
    }
    else if(l == 1)
    {
        printf(" %d --",n1);
    }
    else if(l == 2)
    {
        printf(" %d --",n1);
        printf(" %d --",n2);
    }
    else
    {
        printf(" %d --",n1);
        printf(" %d --",n2);

        for(i=2;i<l;i++)
        {
            aux = n1 + n2;
            n1 = n2;
            n2 = aux;

            printf(" %d --",aux);
        }
    }

    return 0;
}