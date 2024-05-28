#include <stdio.h>
#include <stdlib.h>

int v=1;

void somaVetor(int *vetor1, int *vetor2, int *vetorR, int n)
{
    int i=0;

    for(i=0;i<n;i++)
    {
        vetorR[i] = vetor1[i] + vetor2[i];
    }
}

int *alocarVetor(int n, int n1)
{
    int i=0;
    int *vet = (int*) calloc(n,sizeof(int));

    if(vet == NULL)
    {
        return NULL;
    }

    system("cls");
    printf("Preencha o vetor %d:\n",v);
    for(i=0;i<n1;i++)
    {
        printf("Informe o elemento %d do vetor %d: ",i,v);
        scanf("%d",&vet[i]);
    }

    v++;

    return vet;
}

int main()
{
    int *vetor1;
    int *vetor2;
    int *vetorR;
    int n1,n2,n,i=0;

    printf("Informe o tamanho do vetor1: ");
    scanf("%d",&n1);

    printf("informe o tamanho do vetor2: ");
    scanf("%d",&n2);

    if(n1>n2 || n1==n2)
    {
        n = n1;
    }
    else if(n2>n1)
    {
        n = n2;
    }

    vetorR = (int*) calloc(n,sizeof(int));

    vetor1 = alocarVetor(n,n1);
    vetor2 = alocarVetor(n,n2);
    somaVetor(vetor1,vetor2,vetorR,n);

    system("cls");

    printf("----------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("|%d|",vetorR[i]);
    }
    printf("----------------------------------\n");

    free(vetor1);
    free(vetor2);
    free(vetorR);

    return 0;
}