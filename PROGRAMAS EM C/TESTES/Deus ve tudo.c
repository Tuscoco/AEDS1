#include <stdio.h>
int main ()
{
    int opcao,distancia,velocidade,tempo;
    printf("O que voce quer descobrir?\n1=Distancia(em km)\n2=Velocidade(em km/h)\n3=Tempo(em h)\n");
    scanf("%d",&opcao);
    switch (opcao)
    {
    case 1:
        printf("Qual a velocidade?\n");
        scanf("%d",&velocidade);
        printf("Qual o tempo gasto?\n");
        scanf("%d",&tempo);
        printf("A distancia e:%dkm",velocidade*tempo);
        break;
    case 2:
        printf("Qual a distancia?\n");
        scanf("%d",&distancia);
        printf("Qual o tempo gasto?\n");
        scanf("%d",&tempo);
        printf("A velocidade e:%dkm/h",distancia/tempo);
        break;
    case 3:
        printf("Qual a distancia?\n");
        scanf("%d",&distancia);
        printf("Qual a velocidade?\n");
        scanf("%d",&velocidade);
        printf("O tempo gasto e:%dh",distancia/velocidade);
        break;
    }
    return 0;
}