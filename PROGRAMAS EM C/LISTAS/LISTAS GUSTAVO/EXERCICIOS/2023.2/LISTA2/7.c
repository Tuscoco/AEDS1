#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f1()
{
    return 0;
}

double f2(double num)
{
    return num+1;
}

double f3(double num)
{
    double r = sqrt(1 - pow(num,2));

    return r;
}

int main()
{
    double x,resultado;

    printf("Informe o x:\n");
    scanf("%lf",&x);


    if(x < -1)
    {
        resultado = f1();
    }
    else if(x > -1 && x < 0)
    {
        resultado = f2(x);
    }
    else if(x > 0 && x < 1)
    {
        resultado = f3(x);
    }
    else if(x > 1)
    {
        resultado = f1();
    }

    system("cls");

    printf("Resultado: %lf\n",resultado);
    

    return 0;
}