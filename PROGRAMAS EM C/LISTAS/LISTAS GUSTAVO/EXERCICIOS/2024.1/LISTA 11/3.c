#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int cont=0;
    char *p1 = (char*) malloc(10 * sizeof(char));
    char *p2 = (char*) malloc(10 * sizeof(char));
    int i=0,j=0,n1,n2;

    printf("Informe uma palavra:\n");
    scanf(" %[^\n]", p1);

    printf("Informe outra palavra:\n");
    scanf(" %[^\n]", p2);

    n1 = strlen(p1);
    n2 = strlen(p2);

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(p1[i] == p2[j])
            {
                cont++;
                break;
            }
        }
    }

    printf("%d letras iguais\n",cont);

    free(p1);
    free(p2);

    return 0;
}

///////////DUVIDA