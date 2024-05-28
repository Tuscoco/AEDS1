#include <stdio.h>
#include <stdlib.h>

void ordenarVetor(int *vetor,int t)
{
    int aux;
    int i=0,j=0;

    for(i=0;i<t-1;i++)
    {
        for(j=0;j<t;j++)
        {
            if(vetor[j] > vetor[j+1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

int *alocarVetor(int t)
{
    int *vet = (int*) malloc(t * sizeof(int));
    int i=0;

    if(vet == NULL)
    {
        return NULL;
    }

    printf("Preencha o vetor:\n");
    for(i=0;i<t;i++)
    {
        printf("Informe o elemento %d: ",i);
        scanf("%d",&vet[i]);
    }

    return vet;
}

int main()
{
    int i=0,n;
    int *vetor;

    printf("Informe o numero de elementos do vetor:\n");
    scanf("%d",&n);

    vetor = alocarVetor(n);

    system("cls");

    printf("----------Vetor Desordenado----------\n");
    printf("Vetor: ");
    for(i=0;i<n;i++)
    {
        printf("|%d|",vetor[i]);
    }
    printf("-------------------------------------\n");

    ordenarVetor(vetor,n);

    printf("------------Vetor Ordenado------------\n");
    printf("VetorO: ");
    for(i=0;i<n;i++)
    {
        printf("|%d|",vetor[i]);
    }
    printf("--------------------------------------\n");

    free(vetor);

    return 0;
}