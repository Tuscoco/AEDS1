#include <stdio.h>
#include <stdlib.h>

int condicaoExistencia(int a, int b, int c)
{
    if((a < b + c)&&(b < a + c)&&(c < a + b))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int a,b,c,resultado;

    printf("Informe os tres lados do triangulo:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    resultado = condicaoExistencia(a,b,c);

    if(resultado == 1)
    {
        system("cls");
        printf("Eh um triangulo!!!\n");

        if(a > b && a > c)
        {
            printf("%d eh a hipotenusa!\n",a);
        }
        else if(b > a && b > c)
        {
            printf("%d eh a hipotenusa!\n",b);
        }
        else if(c > a && c > b)
        {
            printf("%d eh a hipotenusa!\n",c);
        }

    }
    else
    {
        printf("NAO EH UM TRIANGULO!!!!\n");
    }

    return 0;
}