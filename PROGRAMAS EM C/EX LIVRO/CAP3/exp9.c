#include <stdio.h>

int main()
{
    int bmaior,bmenor,altura,area;

    printf("Informe a base maior do trapesio:\n");
    scanf("%d",&bmaior);
    printf("Informe a base menor do trapesio:\n");
    scanf("%d",&bmenor);
    printf("Informe a altura do trapesio:\n");
    scanf("%d",&altura);

    area=((bmaior+bmenor)*altura)/2;

    printf("A area do trapesio eh:%d",area);

    return 0;
}