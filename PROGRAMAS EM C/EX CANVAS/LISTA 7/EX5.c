#include <stdio.h>
#include <stdlib.h>

void ordenarVetor(int *vet, int tamanho)
{
    int *posicaoOrdenado, *posicaoComparado;

    for(posicaoOrdenado = vet;(posicaoOrdenado-vet)<tamanho;posicaoOrdenado++)
    {
        for(posicaoComparado = posicaoOrdenado+1;(posicaoComparado-vet)<tamanho;posicaoComparado++)
        {
            if(*posicaoOrdenado>*posicaoComparado)
            {
                int troca = *posicaoOrdenado;
                *posicaoOrdenado = *posicaoComparado;
                *posicaoComparado = troca;
            }
        }
    }
}

int main()
{
    int n,i=0,j=0;

    printf("Informe a quantidade de elementos do vetor:\n");
    scanf("%d",&n);

    int *vetor = (int*) malloc(n * sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("Informe um numero para a posicao %d: ",i);
        scanf("%d", &vetor[i]);
    }

    ordenarVetor(vetor, n);

    for(j=0;j<n;j++)
    {
        printf("Vet[%d] = %d\n",j,vetor[j]);
    }

    return 0;
}