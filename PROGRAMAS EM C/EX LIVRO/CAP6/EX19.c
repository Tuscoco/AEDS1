#include <stdio.h>

int main()
{
    int vet1[10],vet2[10];
    int aux=0,i=0,j=9;

    for(i=0;i<10;i++){
        printf("Informe um numero:\n");
        scanf("%d",&vet1[i]);
    }

    for(i=0;i<10;i++){
        printf("Informe um numero:\n");
        scanf("%d",&vet2[i]);
    }

    printf("\n");

    printf("Vetor 1:");
    for(i=0;i<10;i++){
        printf("%d--",vet1[i]);
    }

    printf("\n");
    printf("Vetor 2:");
    for(i=0;i<10;i++){
        printf("%d--",vet2[i]);
    }

    for(i=0;i<10;i++,j--){
        aux=vet1[i];
        vet1[i]=vet2[j];
        vet2[j]=aux;
    }

    printf("\n");

    printf("Vetor 1:");
    for(i=0;i<10;i++){
        printf("%d--",vet1[i]);
    }

    printf("\n");
    printf("Vetor 2:");
    for(i=0;i<10;i++){
        printf("%d--",vet2[i]);
    }

    return 0;
}