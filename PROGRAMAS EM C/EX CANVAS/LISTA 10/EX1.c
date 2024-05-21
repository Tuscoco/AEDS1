#include <stdio.h>

int main()
{
    int i=1;
    FILE *arq;

    arq = fopen("..\\arquivos\\exercicio1.txt","w");

    for(i=1;i<=10;i++)
    {
        fprintf(arq,"%d\n",i);
    }

    fclose(arq);

    return 0;
}