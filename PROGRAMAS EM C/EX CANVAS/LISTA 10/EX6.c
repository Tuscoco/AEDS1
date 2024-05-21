#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arq = fopen("..\\arquivos\\exercicio6.txt","w");
    int i=1;
    int n,soma=0;

    printf("Informe um numero:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n % i == 0)
        {
            soma+=i;
        }
    }

    fprintf(arq,"%d",soma);

    fclose(arq);

    return 0;
}