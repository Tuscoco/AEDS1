#include <stdio.h>
#include <math.h>

int main ()
{
    int lado,area;

    printf("Informe o lado do quadrado:\n");
    scanf("%d",&lado);

    area=pow(lado,2);

    printf("A area do quadrado eh:%d",area);

    return 0;
}