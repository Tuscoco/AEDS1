#include <stdio.h>

int main()
{
    double janeiro[31];
    int i=0;
    double tempmaior=40,tempmenor=15,soma=0,media=0,cont=0;

    for(i=0;i<31;i++){
        printf("Informe a temperatura do dia %d de janeiro:\n",i+1);
        scanf("%lf",&janeiro[i]);
        soma+=janeiro[i];
    }

    for(i=0;i<31;i++){

        if(janeiro[i]>=tempmenor){
            tempmenor = janeiro[i];
        }

        if(janeiro[i]<=tempmaior){
            tempmaior = janeiro[i];
        }
    }

    media = soma/31;

    for(i=0;i<31;i++){
        if(janeiro[i]<media){
            cont++;
        }
    }

    printf("Maior temperatura: %.2lf\n",tempmenor);
    printf("Menor temperatura: %.2lf\n",tempmaior);
    printf("Temperatura media: %.2lf\n",media);
    printf("Numero de dias nos quais a temperatura foi menor a temperatura media: %.0lf\n",cont);

    return 0;
}