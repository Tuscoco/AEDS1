#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int h,m,s;
}horario;

typedef struct{
    int d,m,a;
}data;

typedef struct{
    data dat;
    horario hor;
    char texto[500];
}compromisso;

int main()
{
    compromisso m;

    printf("Informe a data do compromisso:\n");
    scanf("%d/%d/%d",&m.dat.d,&m.dat.m,&m.dat.a);

    printf("Informe o horario do compromisso:\n");
    scanf("%d:%d:%d",&m.hor.h,&m.hor.m,&m.hor.s);

    printf("De mais detalhes:\n");
    scanf(" %[^\n]", m.texto);

    system("cls");

    printf("---------------------------\n");
    printf("Data:%02d/%02d/%04d\n",m.dat.d,m.dat.m,m.dat.a);
    printf("Horario:%d:%d:%d\n",m.hor.h,m.hor.m,m.hor.s);
    printf("Detalhes:%s\n",m.texto);
    printf("---------------------------\n");

    return 0;
}