#include <stdio.h>
#include <stdlib.h>

float *alocar(int n)
{
    int i=0;
    float *vetor = (float*) malloc(n * sizeof(float));

    if(vetor == NULL)
    {
        return NULL;
    }

    for(i=0;i<n;i++)
    {
        vetor[i] = i+1;
    }

    return vetor;
}

void liberarVetor(float *vetor)
{
    free(vetor);
}

int main()
{
    int n,i=0;
    float *vet;

    printf("Informe o tamanho do vetor:\n");
    scanf("%d",&n);

    vet = alocar(n);

    system("cls");

    printf("-----------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("|%.1f|",vet[i]);
    }
    printf("\n-----------------------------------\n");

    liberarVetor(vet);

    return 0;
}