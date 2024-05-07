#include <stdio.h>

int somas(int **matriz,int a){
    int i=0,j=0,soma=0;

    //Soma da linha 4
    if(a==1){
        for(j=0;j<5;j++){
        soma+=matriz[3][j];
        }
        return soma;
    }

    //Soma da coluna 2
    if(a==2){
        for(i=0;i<5;i++){
            soma+=matriz[i][1];
        }
        return soma;
    }

    //Soma da diagonal principal
    if(a==3){
        i=0;
        j=0;
        for(i=j;i<5;i++,j++){
            soma+=matriz[i][j];
        }
        return soma;
    }

    //Soma da diagonal secundária
    if(a==4){
        for(i=0,j=4;i<5;i++,j--){
            soma+=matriz[i][j];
        }
        return soma;
    }

    //Soma de todos os elementos da matriz
    if(a==5){
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                soma+=matriz[i][j];
            }
        }
        return soma;
    }
}


void preencher_Matriz(int a){
    int m[5][5];
    int i=0,j=0,resultado=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Informe o %d numero da linha %d da coluna %d:\n",j+1,i,j);
            scanf("%d",&m[i][j]);
        }
    }

    resultado=somas(m[5][5],a);

    printf("%d\n",resultado);
}



int main(){
    int opcao;

    printf("Informe o que voce deseja\n1-Soma da linha 4\n2-Soma da coluna 2\n3-soma da diagonal principal\n4-soma da diagonal secundaria\n5-soma de todos os elementos\n");
    scanf("%d",&opcao);

    preencher_Matriz(opcao);

    return 0;
}

/////////////////////////////Incompleto