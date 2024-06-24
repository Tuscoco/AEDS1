#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c1=0,c2=0,c3=0,c4=0,n=0,b=0,op;

    while(1)
    {
        printf("============VOTO============\n");
        printf("1 - Candidato 1\n");
        printf("2 - Candidato 2\n");
        printf("3 - Candidato 3\n");
        printf("4 - Candidato 4\n");
        printf("5 - Nulo\n");
        printf("6 - Branco\n");
        printf("0 - Finalizar votacao\n");
        printf("============================\n");
        scanf("%d",&op);

        if(op == 1){
            c1++;
        }else if(op == 2){
            c2++;
        }else if(op == 3){
            c3++;
        }else if(op == 4){
            c4++;
        }else if(op == 5){
            n++;
        }else if(op == 6){
            b++;
        }else if(op == 0){
            break;
        }else{
            printf("Codigo invalido!\n");
        }
    }

    system("cls");
    printf("====================\n");
    printf("Candidato 1: %d\n",c1);
    printf("Candidato 2: %d\n",c2);
    printf("Candidato 3: %d\n",c3);
    printf("Candidato 4: %d\n",c4);
    printf("Nulo: %d\n",n);
    printf("Branco: %d\n",b);
    printf("====================\n");

    return 0;
}