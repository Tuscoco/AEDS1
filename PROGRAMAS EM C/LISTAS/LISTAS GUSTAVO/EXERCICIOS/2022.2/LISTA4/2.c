#include <stdio.h>
#include <stdlib.h>

int preencherVetor(int n)
{
    int *vet = (int*) malloc(n * sizeof(int));
    int i=0;

    printf("Preencha o vetor apenas com numeros impares:\n");

    for(i=0;i<n;i++)
    {
        printf("Informe um numero para a posicao %d do vetor:\n",i);
        scanf("%d",&vet[i]);

        if(vet[i] % 2 != 0)
        {
            while(vet[i] % 2 != 0)
            {
                printf("Numero invalido\nInforme outro:\n");
                scanf("%d",&vet[i]);
            }
        }
        
    }

    return vet;
}

int main()
{
    int *vetor;
    int i=0,num;

    printf("Informe o numero de termos do vetor:\n");
    scanf("%d",&num);

    vetor = preencherVetor(num);

    system("cls");

    for(i=0;i<num;i++)
    {
        printf("Vetor[%d] = %d\n",i,vetor[i]);
    }

    return 0;
}

//////DUVIDA    