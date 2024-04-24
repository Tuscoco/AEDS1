#include <stdio.h>

int main()
{
    int nd,nl;

    printf("Informe o numero de lados do poligono:\n");
    scanf("%d",&nl);

    nd=nl*(nl-3)/2;

    printf("Esse poligono possui %d diagonais",nd);

    return 0;
}