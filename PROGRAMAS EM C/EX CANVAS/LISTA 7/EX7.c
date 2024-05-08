#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet;
    int i=0,j=0,n;

    printf("Informe o numero de elementos a serem armazenados no vetor(max. 15):\n");
    scanf("%d",&n);

    vet = (int*) malloc(n * sizeof(int));

    printf("Insira %d numeros de elementos no vetor:\n",n);

    for(i=0;i<n;i++){
        printf("Elemento %d: ",i+1);
        scanf("%d",&vet[i]);
    }

    printf("Os elementos do vetor em ordem inversa:\n");

    for(i=n-1;i>=0;i--){
        printf("Elemento %d: %d\n",i+1,vet[i]);
    }

    free(vet);

    return 0;
}