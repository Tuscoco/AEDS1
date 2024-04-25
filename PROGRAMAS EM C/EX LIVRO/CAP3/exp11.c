#include <stdio.h>

int main()
{
    int dmaior,dmenor,area;

    printf("Informe a diagonal maior do losango:\n");
    scanf("%d",&dmaior);
    printf("Informe a diagonal menor do losango:\n");
    scanf("%d",&dmenor);

    area=(dmaior*dmenor)/2;

    printf("Area do losango eh:%d",area);

    return 0;
}