#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet;
    int n,i=0;

    printf("Informe o numero de elementos a serem armazenados no vetor:\n");
    scanf("%d",&n);

    vet = (int*) malloc(n * sizeof(int));

    if(vet==NULL){
        fprintf(stderr,"Erro!\n");
        return 0;
    }

    printf("Insira os %d elementos no vetor:\n",n);

    for(i=0;i<n;i++){
        printf("Elemento - %d: ",i);
        scanf("%d",&vet[i]);
    }

    for(i=0;i<n;i++){
        printf("Vet[%d] = %d\n",i,vet[i]);
    }

    free(vet);

    return 0;
}