#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet;
    int i=0,soma=0,n;

    printf("Informe o numero de elementos a serem armazenados no vetor(max. 10):\n");
    scanf("%d",&n);

    while(n<1 || n>10){
        printf("Numero invalido!\nInforme outro:\n");
        scanf("%d",&n);
    }

    vet = (int*) malloc(n * sizeof(int));

    for(i=0;i<n;i++){
        printf("Elemento %d: ",i+1);
        scanf("%d",&vet[i]);
        soma+=vet[i];
    }

    printf("Soma: %d",soma);

    free(vet);

    return 0;
}