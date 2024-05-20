#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cont=0;
    char espaco = '\n';
    char *texto = (char*) malloc(500 * sizeof(char));
    FILE *arq = fopen("exercicio2.txt","r");

    while(!feof(arq))
    {
        char l = fgetc(arq);
        printf("%c", l);

        if(l == espaco)
        {
            cont++;
        }
    }

    printf("\n\nLinhas: %d\n",cont+1);

    fclose(arq);
    free(texto);

    return 0;
}