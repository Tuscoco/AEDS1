#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void ordenarVetor(double *vet, int num)
{
    int i=0,j=0;
    double aux;

    for(i=0;i<num-1;i++)
    {
        for(j=0;j<num-1;j++)
        {
            if(vet[j] < vet[j+1])
            {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}


int main()
{
    double *vetor;
    int i=0,n;

    printf("Informe a quantidade de termos do vetor:\n");
    scanf("%d",&n);

    vetor = (double*) malloc(n * sizeof(double));

    if(vetor == NULL)
    {
        return 0;
    }

    for(i=0;i<n;i++)
    {
        printf("Informe o termo %d do vetor: ",i+1);
        scanf("%lf",&vetor[i]);
    }

    system("cls");

    printf("Vetor original:\n");
    for(i=0;i<n;i++)
    {
        printf("%.1lf--",vetor[i]);
    }
    printf("\n");

    ordenarVetor(vetor,n);

    printf("Vetor ordenado:\n");
    for(i=0;i<n;i++)
    {
        printf("%.1lf--",vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}