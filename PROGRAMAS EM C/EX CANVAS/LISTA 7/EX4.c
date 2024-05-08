#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *string;
    int i=0,n;

    printf("Informe o numero de letras da palavra que sera digitada:\n");
    scanf("%d",&n);

    string = (char*) malloc(n * sizeof(char));

    printf("Informe a palavra:\n");
    scanf("%s ", &string);

    for(i=0;i<n;i++){
        printf("%c",string[i]);
    }
    printf("\n");

    free(string);

    return 0;
}
///////////DÚVIDA