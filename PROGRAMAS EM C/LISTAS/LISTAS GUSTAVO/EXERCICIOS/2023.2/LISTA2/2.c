#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct ponto{

    int x;
    int y;

}ponto;

int main()
{
    ponto p1,p2;
    double distancia = 0;

    printf("Informe as coordenadas do ponto 1(x,y):\n");
    scanf("%d %d",&p1.x,&p1.y);

    printf("Informe as coordenadas do ponro 2(x,y):\n");
    scanf("%d %d",&p2.x,&p2.y);

    distancia = sqrt(pow((p2.x + p1.x),2) + pow((p2.y + p1.y),2));

    system("cls");

    printf("Distancia entre os pontos: %.2lf\n",distancia);

    return 0;
}

///////////////UAI