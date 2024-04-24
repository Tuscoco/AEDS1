#include <stdio.h>

int main()
{
    int i=1,filhos;
    double salario,somas=0,medias=0,mediasf=0,maior=0,perc=0,pobres=0,somaf=0,somaperc=0,cont=0;

    for( ;i>=0;i++)
    {
        printf("Informe o salario:\n");
        scanf("%lf",&salario);
        printf("Informe o numero de filhos:\n");
        scanf("%d",&filhos);

        if(salario<0){
            return 0;
        }else if((salario>0) && (salario<=100)){
            somaperc+=1;
        }

        cont+=1;
        somas+=salario;
        somaf+=filhos;
    }
    medias=somas/cont;
    mediasf=somaf/cont;

    printf("Media dos salarios:%.2lf\n",medias);
    printf("Media de filhos:%.1lf\n",mediasf);

    return 0;
}