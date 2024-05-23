#include <stdio.h>
#include <stdlib.h>

typedef struct horario{
    int horas;
    int minutos;
    int segundos;
} horario;

int main()
{
    horario var;

    printf("Informe o horario(hh:mm:ss):\n");
    scanf("%d:%d:%d",&var.horas,&var.minutos,&var.segundos);

    system("cls");

    printf("\n%d:%d:%d\n",var.horas,var.minutos,var.segundos);

    return 0;
}