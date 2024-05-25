#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substituir(char *frase, char *c1, char *c2,int n)
{
    int i=0;

    for(i=0;i<n;i++)
    {
        if(frase[i] == c1)
        {
            frase[i] = c2;
        }
    }
}

int main()
{
    char c1,c2;
    char *texto = (char*) malloc(10 * sizeof(char));
    int n;

    printf("Informe uma frase:\n");
    scanf(" %[^\n]", texto);

    printf("Informe duas letras:\n");
    scanf(" %c", &c1);
    scanf(" %c", &c2);

    n = strlen(texto);

    substituir(texto,c1,c2,n);

    system("cls");

    printf("%s\n",texto);

    free(texto);

    return 0;
}