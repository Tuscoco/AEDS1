//inclusão de biblioteca 
#include <stdio.h>
//Função
int main ()
{
//Determinar variaveis
    int num,ant,suc;
    printf("Digite um numero:\n");
    scanf("%d",&num);
    ant=num-1;
    suc=num+1;
    printf("O antecessor e:%d",ant);
    printf("\nO sucessor e:%d",suc);
    return 0;
}