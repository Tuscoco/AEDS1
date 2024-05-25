#include <stdio.h>
#include <stdlib.h>

float *vetor(int n)
{
    float *vet = (float*) calloc(n,sizeof(float));

    return vet;
}

int main()
{
    int num,i=0;
    float *vet;

    printf("Informe a quantidade de elementos do vetor:\n");
    scanf("%d",&num);

    vet = vetor(num);

    system("cls");

    printf("-------------------------------\n");
    for(i=0;i<num;i++)
    {
        printf("Vetor[%d] = %f\n",i,vet[i]);
    }
    printf("-------------------------------\n");

    free(vet);

    return 0;
}