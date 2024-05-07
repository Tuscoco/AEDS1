#include <stdio.h>

int main()
{
    char gabarito[8];
    char resposta;
    int i=0,j=0,total=0,num,pontos=0;
    float perc=0;

    for(i=0;i<8;i++){
        printf("Informe a resposta da questao %d:\n",i);
        scanf("%c",&gabarito[i]);
    }

    for(i=0;i<10;i++){
        printf("Informe o numero do aluno:\n");
        scanf("%d",&num);

        for(j=1;j<=8;j++){

            pontos=0;

            printf("Informe a resposta do aluno %d para a resposta da questao %d\n",num,j);
            scanf("%c ", &resposta);

            if(resposta==gabarito[j-1]){
                pontos++;
            }
        }

        printf("A nota do aluno %d foi: %d\n",num,pontos);

        if(pontos>=6){
            total++;
        }
    }

    perc=total*(total/100);
    printf("A porcentagem de aprovacao eh:%f",perc);

    return 0;
}

/////////////////////////////////////////PEDIR PRA EXPLICAR