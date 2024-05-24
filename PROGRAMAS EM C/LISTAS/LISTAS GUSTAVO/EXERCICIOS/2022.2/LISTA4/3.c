#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    int razao,e1;

    printf("Informe o primeiro elemento:\n");
    scanf("%d",&e1);

    printf("Informe a razao:\n");
    scanf("%d",&razao);

    printf("Informe a numero de termos:\n");
    scanf("%d",&n);

    int *vetor = (int*) malloc(n * sizeof(int));

    vetor[0] = e1;

    for(i=1;i<n;i++)
    {
        e1 *= razao;

        vetor[i] = e1;
    }

    system("cls");

    for(i=0;i<n;i++)
    {
        printf("Vetor[%d] = %d\n",i,vetor[i]);
    }

    free(vetor);

    return 0;
}