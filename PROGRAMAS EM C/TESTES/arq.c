#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *texto = (char*) malloc(50*sizeof(char));

    printf("Informe o nome do arquivo:\n");
    scanf("%s",texto);

    FILE *f;
    f = fopen("D:\\Facul\\AEDS1\\C\\AEDS1-C\\PROGRAMAS EM C\\TESTES\\arquivos\\teste.txt","w");

    fprintf(f,"VAI TOMAR NO CU!!!!!!!!!!!");

    free(texto);
    fclose(f);

    return 0;
}