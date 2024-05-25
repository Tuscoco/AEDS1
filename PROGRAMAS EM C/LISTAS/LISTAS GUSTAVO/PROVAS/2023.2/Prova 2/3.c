#include <stdio.h>
#include <stdlib.h>

float *preencherVetor(int n, int num)
{
    float *vetp = (float*) calloc(num,sizeof(float));
    int i=0;

    for(i=0;i<n;i++)
    {
        printf("Informe o elemento %d do vertor: ",i);
        scanf("%f",&vetp[i]);
    }

    return vetp; 
}

float *somarVetores(float *vet1, float *vet2, int num)
{
    float *soma = (float*) malloc(num * sizeof(float));
    int i=0;

    for(i=0;i<num;i++)
    {
        soma[i] = vet1[i] + vet2[i];
    }

    return soma;
}

int main()
{
    int n1,n2,maior,i;
    float *vetor1,*vetor2,*soma;

    printf("Informe a quantidade de elementos do vetor 1: ");
    scanf("%d",&n1);

    printf("Informe a quantidade de elementos do vetor 2: ");
    scanf("%d",&n2);

    if(n1>n2)
    {
        maior = n1;
    }
    else if(n2>n1)
    {
        maior = n2;
    }
    else
    {
        maior = n1;
    }

    vetor1 = preencherVetor(n1,maior);
    vetor2 = preencherVetor(n2,maior);

    soma = somarVetores(vetor1,vetor2,maior);

    system("cls");

    printf("----------Soma dos vetores----------\n");
    for(i=0;i<maior;i++)
    {
        printf("Soma[%d] = %f\n",i,soma[i]);
    }
    printf("------------------------------------\n");

    free(vetor1);
    free(vetor2);
    free(soma);

    return 0;
}