#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverterString(char *texto, int tamanho)
{
    int i=0;
    char aux;

    for(i=0;i<tamanho/2;i++)
    {
        aux = texto[i];
        texto[i] = texto[tamanho-i-1];
        texto[tamanho-i-1] = aux;
    }
}


int main()
{
    char *palavra = (char*) malloc(100 * sizeof(char));
    int n;

    if(palavra == NULL)
    {
        return 0;
    }

    printf("Escreva uma palavra:\n");
    scanf(" %[^\n]", palavra);

    n = strlen(palavra);

    system("cls");

    printf("%s\n", palavra);

    inverterString(palavra,n);

    printf("%s\n", palavra);

    free(palavra);

    return 0;
}