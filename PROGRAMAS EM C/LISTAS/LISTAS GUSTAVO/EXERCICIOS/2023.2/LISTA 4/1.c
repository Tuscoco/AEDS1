#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor = (int*) malloc(10 * sizeof(int));
    int maior,i;

    printf("Preencha o vetor:\n");
    for(i=0;i<10;i++)
    {
        printf("Informe o elemento %d: ",i);
        scanf("%d",&vetor[i]);
    }

    maior = vetor[0];

    for(i=0;i<10;i++)
    {
        if(vetor[i]>maior)
        {
            maior = vetor[i];
        }
    }

    system("cls");

    printf("Maior: %d\n",maior);

    free(vetor);

    return 0;
}