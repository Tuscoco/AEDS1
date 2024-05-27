#include <stdio.h>
#include <stdlib.h>

int *multiplicar(int *v, int **m, int tv, int l, int c)
{
    if(tv != l)
    {
        return NULL;
    }

    int *vetorR = (int*) calloc(c,sizeof(int));

    if(vetorR == NULL)
    {
        fprintf(stderr,"Erro ao alocar memoria!!!");
        return NULL;
    }

    int i,j;

    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            vetorR[j] += v[i] * m[i][j]; 
        }
    }

    return vetorR;
}

int **alocarMatriz(int l, int c)
{
    int i=0,j=0;
    int **m = (int**) malloc(l * sizeof(int*));

    if(m == NULL)
    {
        fprintf(stderr,"Erro ao alocar memoria!!!");
        return NULL;
    }

    for(i=0;i<l;i++)
    {
        m[i] = (int*) malloc(c * sizeof(int));
    }

    ///////////////////////////////////////////////////////////

    printf("Preencha a matriz:\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Informe o elemento e[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    return m;
}

int *alocarVetor(int t)
{
    int i=0;
    int *v = (int*) malloc(t * sizeof(int));

    printf("Preencha o vetor:\n");
    for(i=0;i<t;i++)
    {
        printf("Informe o elemento %d: ",i);
        scanf("%d",&v[i]);
    }

    return v;
}

int main()
{
    int **matriz;
    int *vetor,*vetorR;
    int l,c;
    int i=0;

    printf("Informe o tamanho do vetor(ele sera igual a quantidade de linhas da matriz):\n");
    scanf("%d",&l);

    printf("Informe a quantidade de colunas da matriz:\n");
    scanf("%d",&c);

    matriz = alocarMatriz(l,c);
    vetor = alocarVetor(l);

    vetorR = multiplicar(vetor,matriz,l,l,c);

    system("cls");

    printf("---------------Vetor Resultante---------------\n");
    for(i=0;i<l;i++)
    {
        printf("VetorR[%d] = %d\n",i,vetorR[i]);
    }
    printf("----------------------------------------------\n");

    free(vetor);

    for(i=0;i<l;i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}