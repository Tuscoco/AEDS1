#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arq = fopen("..\\arquivos\\exercicio1.txt","r");
    FILE *arq2 = fopen("..\\arquivos\\exercicio2.txt","r");
    FILE *arq3 = fopen("..\\arquivos\\exercicio5.txt","w");
    char *texto1 = (char*) malloc(50 * sizeof(char));

    
    fscanf(arq,"%[^\0]",texto1);

    fprintf(arq3,"%s",texto1);

    fscanf(arq2,"%[^\n]",texto1);

    fprintf(arq3,"%s",texto1);


    fclose(arq);
    fclose(arq2);
    fclose(arq3);

    free(texto1);

    return 0;
}

//Duvida///////////////////////////////////////////////////////////