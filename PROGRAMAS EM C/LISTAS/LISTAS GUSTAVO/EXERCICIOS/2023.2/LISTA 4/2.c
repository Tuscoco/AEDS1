#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,cont=0;
    int *vetor = (int*) malloc(10 * sizeof(int));

    printf("Preencha o vetor:\n");
    for(i=0;i<10;i++)
    {
        printf("Informe o elemento %d\n",i);
        scanf("%d",&vetor[i]);
    }

    printf("Informe um numero:\n");
    scanf("%d",&n);

    for(i=0;i<10;i++)
    {
        if(vetor[i] == n)
        {
            cont++;
        }
    }

    int *posicoes = (int*) malloc(cont * sizeof(int));

    for(i=0;i<10;i++)
    {
        if(vetor[i] == n)
        {
            posicoes[i] = i;
        }
    }

    system("cls");

    printf("--------------------\n");
    printf("Cont: %d\n",cont);
    for(i=0;i<cont;i++)
    {
        printf("Posicao: %d\n",posicoes[i]);
    }
    printf("--------------------\n");

    free(vetor);
    free(posicoes);

    return 0;
}