#include <stdio.h>

int main()
{
    int vet[6];
    int i=0,soma=0,impares=0;

    for(i=0;i<6;i++){
        printf("Informe um numero:\n");
        scanf("%d",&vet[i]);
    }

    printf("Os numeros pares sao:\n");
    for(i=0;i<6;i++){
        if(vet[i]%2==0){
            printf("numero %d na posicao %d\n",vet[i],i);
            soma+=vet[i];
        }
    }
    printf("Soma dos pares = %d\n",soma);

    printf("\n\n");

    printf("Os numeros impares sao:\n");
    for(i=0;i<6;i++){
        if(vet[i]%2!=0){
            printf("Numero %d na posicao %d\n",vet[i],i);
            impares++;
        }
    }
    printf("Quantidade de impares = %d\n",impares);

    return 0;
}