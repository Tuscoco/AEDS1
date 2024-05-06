#include <stdio.h>

int main()
{
    int vet[5];
    int i=0,cod;

    for(i=0;i<5;i++){
        printf("Informe um numero:\n");
        scanf("%d",&vet[i]);
    }

    printf("Informe um dos codigos:\n1-Ordem direta\n2-Ordem inversa\n0-Finalizar o programa\n");
    scanf("%d",&cod);

    if(cod==0){
        printf("FIM DO PROGRAMA\n");
        return 0;
    }else if(cod==1){
        for(i=0;i<5;i++){
            printf("%d--",vet[i]);
        }
        printf("\n");
    }else if(cod==2){
        for(i=4;i>=0;i--){
            printf("%d--",vet[i]);
        }
        printf("\n");
    }

    return 0;
}