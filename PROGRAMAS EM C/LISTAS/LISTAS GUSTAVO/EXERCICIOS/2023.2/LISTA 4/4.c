#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor = (int*) malloc(0 * sizeof(int));
    int n,cont=0,i=0;

    while(1)
    {
        cont++;
        int *vetN = (int*) realloc(vetor,cont * sizeof(int));

        vetor = vetN;

        printf("Informe um numero:\n");
        scanf("%d",&n);

        if(n == 0)
        {
            break;
        }

        vetor[cont-1] = n;
    }

    for(i=0;i<cont-1;i++)
    {
        printf("|%d|",vetor[i]);
    }

    free(vetor);

    return 0;
}