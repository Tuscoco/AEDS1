#include <stdio.h>

int main()
{
    int x[10];
    int y[10];
    int diferentes[10];
    int iguais[10];
    int i=0,j=0,conti=0,contd=0;

////////LER OS NUMEROS E GUARDAR EM CADA VETOR
    for(i=0;i<10;i++){
        printf("Informe um numero:\n");
        scanf("%d",&x[i]);
    }
    for(i=0;i<10;i++){
        printf("Informe um numero:\n");
        scanf("%d",&y[i]);
    }

///////CONTADOR DE NUMEROS IGUAIS E DIFERENTES NOS VETORES
    for(i=0,j=0;i<10;i++,j++){
        if(x[i]==y[j]){
            conti+=1;
            iguais[j]=y[j];
        }else if(x[i]!=y[j]){
            contd=10-conti;
            diferentes[j]=y[j];
        }
    }

///////UNIÃO ENTRE X E Y
/*    printf("Uniao de x e y:\n");
    for(i=0;i<conti;i++){
        printf("%d--",diferentes[i]);
    }
    printf("\n");*/

///////SOMA DOS ELEMENTOS DE X E Y
    printf("Soma dos elementos de x e y:\n");
    for(i=0;i<10;i++){
        printf("%d--",x[i]+y[i]);
    }
    printf("\n");

///////PRODUTO DOS ELEMENTOS DE X E Y
    printf("Produto dos elementos de x e y:\n");
    for(i=0;i<10;i++){
        printf("%d--",x[i]*y[i]);
    }
    printf("\n");

///////INTERSECÇÃO ENTRE X E Y
    printf("Interseccao entre x e y:\n");
    for(i=0;i<conti;i++){
        printf("%d--",iguais[i]);
    }
    printf("\n");

    return 0;
}

//////////////////////////////////INCOMPLETO