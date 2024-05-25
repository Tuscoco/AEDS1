#include <stdio.h>
#include <stdlib.h>

void arquivo(char *frase, char *nome)
{
    FILE *arq = fopen(nome,"w");

    fprintf(arq,"%s",frase);

    fclose(arq);
}

int main()
{
    char *frase = (char*) malloc(20 * sizeof(char));
    char *nome = (char*) malloc(15 * sizeof(char));

    printf("Informe o nome do arquivo:\n");
    scanf(" %[^\n]", nome);

    printf("Informe uma frase:\n");
    scanf(" %[^\n]", frase);

    arquivo(frase, nome);

    free(frase);
    free(nome);

    return 0;
}