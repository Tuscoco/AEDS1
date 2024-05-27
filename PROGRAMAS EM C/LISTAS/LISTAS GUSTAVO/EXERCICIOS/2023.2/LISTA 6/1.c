#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia,mes,ano;
}data;

int main()
{
    data d;

    printf("Informe uma data:\n");
    scanf("%d/%d/%d",&d.dia,&d.mes,&d.ano);

    system("cls");

    printf("%d/%d/%d\n",d.dia,d.mes,d.ano);

    return 0;
}