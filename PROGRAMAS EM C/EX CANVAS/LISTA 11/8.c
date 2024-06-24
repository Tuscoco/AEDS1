#include <stdio.h>
#include <stdlib.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
} data;

int main()
{
    data var;

    printf("Informe a data(dd/mm/aaaa):\n");
    scanf("%02d/%02d/%04d",&var.dia,&var.mes,&var.ano);

    system("cls");

    printf("%d/%d/%d\n",var.dia,var.mes,var.ano);

    return 0;
}