#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i=0;
    char *vogais = "aeiouAEIOU";
    FILE *arq = fopen("..\\arquivos\\exercicio7.txt","a");

    printf("Informe a quantidade de letras:\n");
    scanf("%d",&n);

    char letras = (char *) malloc(n * sizeof(char));

    for(i=0;i<n;i++)
    {
        printf("Informe uma letra:\n");
        scanf(" %s", *(letras + i));
    }

    for(i=0;i<n;i++)
    {
        fprintf(arq," %c", letras[i]);
    }

    fclose(arq);
    free(letras);

    return 0;
}
///////GUSTAVO ME AJUDA////////////