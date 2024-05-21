#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *texto = (char*) malloc(40 * sizeof(char));
    FILE *arq = fopen("..\\arquivos\\exercicio2.txt","w");

    printf("Digite uma frase:\n");
    scanf("%[^\n]", texto);

    fprintf(arq,"%s",texto);

    fclose(arq);
    free(texto);

    return 0;
}