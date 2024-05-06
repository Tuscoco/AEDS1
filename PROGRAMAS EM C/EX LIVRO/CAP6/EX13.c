#include <stdio.h>

int main()
{
    int vet[10];
    int i=0;

    for(i=0;i<10;i++){
        printf("Informe um numero:\n");
        scanf("%d",&vet[i]);
    }

    for(i=0;i<10;i++){
        if(vet[i]>50){
            printf("X[%d] = %d\n",i,vet[i]);
        }
    }

    return 0;
}