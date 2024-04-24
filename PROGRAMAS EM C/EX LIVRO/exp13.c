#include <stdio.h>

int main()
{
    int tabuada=1,num,resultado;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    while (tabuada<11)
    {
        resultado=num*tabuada;

        printf("%d x %d = %d\n",num,tabuada,resultado);
        tabuada++;
    }
    
    return 0;
}