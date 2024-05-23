#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverterString(char *texto, int tamanho)
{
    int i=0,j=tamanho;
    char aux;

    for(i=0,j=tamanho;i<j;i++,j--)
    {
        aux = texto[i];
        texto[i] = texto[j];
        texto[j] = aux;
    }

    printf("/n%s\n", texto);
}


int main()
{
    char *palavra = (char*) malloc(100 * sizeof(char));

    if(palavra == NULL)
    {
        return 0;
    }

    printf("Escreva uma palavra:\n");
    scanf(" %[^\n]", palavra);

    int n = strlen(palavra);

    system("cls");

    printf("%s\n", palavra);

    inverterString(palavra,n);

    printf("%s\n", palavra);

    free(palavra);

    return 0;
}
////////////////////////duvida