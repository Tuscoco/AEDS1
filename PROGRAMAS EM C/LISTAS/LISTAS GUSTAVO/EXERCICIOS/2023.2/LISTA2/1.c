#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *t1 = (char*) malloc(100 * sizeof(char));
    char *t2 = (char*) malloc(100 * sizeof(char));

    printf("Informe a primeira string:\n");
    scanf(" %[^\n]", t1);

    printf("Informe a segunda string:\n");
    scanf(" %[^\n]", t2);

    strcat(t1,t2);

    system("cls");

    printf(" %s", t1);

    free(t1);
    free(t2);

    return 0;
}