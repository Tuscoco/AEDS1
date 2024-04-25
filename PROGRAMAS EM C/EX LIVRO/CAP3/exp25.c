
#include <stdio.h>

int main()
{
    double h,m,mm,s;

    printf("Digite o horario no formato (hh/mm):\n");
    scanf("%lf/%lf",&h,&m);

    mm=h*60+m;
    s=mm*60;

    printf("Minutos:%.0lf",mm);
    printf("\nSegundos:%.0lf",s);

    return 0;
}