#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia,mes,ano;
}data;

int validar(data d)
{
    int valido;

    if((d.mes == 1) || (d.mes == 3) || (d.mes == 5) || (d.mes == 7) || (d.mes == 8) || (d.mes == 10) || (d.mes == 12))
    {
        if(d.dia <= 0 || d.dia > 31)
        {
            valido = 1;
        }
        else
        {
            valido = 0;
        }
    }
    else if(d.mes == 2)
    {
        if(((d.ano % 100 == 0)&&(d.ano % 400 == 0)) || (d.ano % 4 == 0))
        {
            if(d.dia <= 0 || d.dia > 29)
            {
                valido = 1;
            }
            else
            {
                valido = 0;
            }
        }
        else
        {
            if(d.dia <= 0 || d.dia > 28)
            {
                valido = 1;
            }
            else
            {
                valido = 0;
            }
        }
    }
    else if((d.mes == 4) || (d.mes == 6) || (d.mes == 9) || (d.mes == 11))
    {
        if(d.dia <= 0 || d.dia > 30)
        {
            valido = 1;
        }
        else
        {
            valido = 0;
        }
    }

    return valido;
}

int main()
{
    data d;
    int v;

    printf("Informe uma data:\n");
    scanf("%d/%d/%d",&d.dia,&d.mes,&d.ano);

    v = validar(d);

    if(v == 0)
    {
        system("cls");
        printf("A data %d/%d/%d eh valida!!!\n",d.dia,d.mes,d.ano);
    }
    else
    {
        system("cls");
        printf("A data %d/%d/%d eh INVALIDA!!!\n",d.dia,d.mes,d.ano);
    }

    return 0;
}