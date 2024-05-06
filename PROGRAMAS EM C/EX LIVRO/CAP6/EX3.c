//INCLUSÃO DE BIBLIOTECA
#include <stdio.h>

//FUNÇÃO PRINCIPAL
int main()
{
    //DECLARAÇÃO DE VARIÁVEIS
    int vet1[10],vet2[10],vet3[20];
    int i=0,j=0;

    //ENTRADA DE DADOS NOS VETORES
    for(i=0;i<10;i++){
        printf("Informe um numero:\n");
        scanf("%d",&vet1[i]);
        printf("Informe um numero:\n");
        scanf("%d",&vet2[i]);
    }

    //INTERCALAR
    for(i=0;i<10;i++){
        vet3[j]=vet1[i];
        vet3[j+1]=vet2[i];
        j++;
    }

    //SAÍDA DE DADOS
    for(i=0;i<20;i++){
        printf("Vet3[%d] = %d\n",i,vet3[i]);
    }
    
    return 0;
}

////////////////ERRADO DESGRAÇAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA