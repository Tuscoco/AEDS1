#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor;
    int i=0,n,maior=-2000;

    printf("Insira o numero total de elementos(1 a 100):\n");
    scanf("%d",&n);

    while(n<1 || n>100){
        printf("Numero invalido!\nInforme outro:\n");
        scanf("%d",&n);
    }

    vetor = (int*) malloc(n * sizeof(int));

    for(i=0;i<n;i++){
        printf("Numero %d: ",i+1);
        scanf("%d",&vetor[i]);
    }

    for(i=0;i<n;i++){
        if(vetor[i]>maior){
            maior=vetor[i];
        }
    }

    free(vetor);

    printf("O maior elemento eh: %d\n",maior);

    return 0;
}