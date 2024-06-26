#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,m,a;
    char *meses[] = {"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};

    printf("Informe sua data de aniversario(dd/mm/aaaa): ");
    scanf("%d/%d/%d",&d,&m,&a);

    if(m < 1 || m > 12){
        printf("Data invalida!!!\n");
        return 0;
    }

    system("cls");
    printf("Voce nasceu em %d de %s de %d\n",d,meses[m-1],a);

    return 0;
}