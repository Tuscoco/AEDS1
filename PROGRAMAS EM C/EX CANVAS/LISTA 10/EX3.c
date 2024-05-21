#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cont=0;
    FILE *arq = fopen("..\\arquivos\\exercicio2.txt","r");

    while(!feof(arq))
    {
        char l = fgetc(arq);
        if(l == 'a' || l == 'A')
        {
            cont++;
        }
    }

    printf("%d",cont);

    fclose(arq);

    return 0;
}