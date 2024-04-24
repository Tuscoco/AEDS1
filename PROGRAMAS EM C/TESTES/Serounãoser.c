#include <stdio.h>
int main ()
{
    int numero;
    printf("Digite um numero:\n");
    scanf("%d",&numero);
    if(numero%2==0){
        printf("\n E PAR");
    }else{
        printf("\n E IMPAR");
    }
    return 0;
}