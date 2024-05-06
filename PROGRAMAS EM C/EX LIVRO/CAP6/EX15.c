#include <stdio.h>

int main()
{
    int vet1[10],vet2[5];
    int i=0,j=0,cont=0;

    for(i=0;i<10;i++){
        printf("Informe um numero:\n");
        scanf("%d",&vet1[i]);
    }

    for(i=0;i<5;i++){
        printf("Informe um divisor:\n");
        scanf("%d",&vet2[i]);
    }

    for(i=0;i<10;i++){
        printf("Numero %d\n",vet1[i]);
        for(j=0;j<5;j++){
            if(vet1[i]%vet2[j]==0){
                printf("Divisivel por %d na posicao %d\n",vet2[j],j);
            }else{
                cont++;
            }
        }
        if(cont==5 || cont==4){
            printf("Nao possui divisores no segundo vetor\n");
        }
    }

    return 0;
}