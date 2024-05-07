#include <stdio.h>

int **soma(int **ma,int **mb){
    int mc[4][6];
    int i=0,j=0;

    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
            mc[i][j] = ma[i][j] + mb[i][j];
        }
    }

    return **mc;
}

int **diferença(int **aa,int **bb){
    int mc[4][6];
    int i=0,j=0;

    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
            mc[i][j] = aa[i][j] - bb[i][j];
        }
    }

    return **mc;
}

void preencher_Matrizes(int opcao){
    int A[4][6];
    int B[4][6];
    int i=0,j=0;
    int **resultado;

    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    if(opcao==1){
        resultado = soma(**A,**B);

        for(i=0;i<4;i++){
            for(j=0;j<6;j++){
                printf("%d--",resultado[i][j]);
            }
            printf("\n");
        }
    }else if(opcao==2){
        resultado = (int **) diferença(**A,**B);

        for(i=0;i<4;i++){
            for(j=0;j<6;j++){
                printf("%d--",resultado[i][j]);
            }
            printf("\n");
        }
    }
}

int main()
{
    int a;

    printf("Infome a opcao que voce deseja:\n1-Soma das matrizes\n2-Diferença das matrizes\n");
    scanf("%d",&a);

    preencher_Matrizes(a);

    return 0;
}