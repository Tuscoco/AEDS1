//INCLUSÃO DE BIBLIOTECA
#include <stdio.h>
#include <stdlib.h>

//FUNÇÃO PARA INTERCALAR
int *intercalar(const int *v1,const int *v2){
    int *vet = (int*) malloc(20*sizeof(int));
    int j=0;

    for(j=0;j<20;j++){
        vet[2*j] = v1[j];
        vet[2*j+1] = v2[j];
    }
    
    return vet;
}

//FUNÇÃO PRINCIPAL
int main()
{
    //DECLARAÇÃO DE VARIÁVEIS
    int vet1[10],vet2[10],*vet3;
    int i=0;

    //ENTRADA DE DADOS NO VETOR 1
    for(i=0;i<10;i++){
        printf("Informe um numero:\n");
        scanf("%d",&vet1[i]);
    }

    //ENTRADA DE DADOS NO VETOR 2
    for(i=0;i<10;i++){
        printf("Informe um numero:\n");
        scanf("%d",&vet2[i]);
    }

    //SAÍDA DE DADOS
    vet3 = intercalar(vet1,vet2);
    for(i=0;i<20;i++){
        printf("%d--",vet3[i]);
    }

    return 0;
}