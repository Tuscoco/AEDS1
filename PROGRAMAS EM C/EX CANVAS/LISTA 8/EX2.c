#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct registro{
    char nome[100];
    int telefone;
    double preco;
};
typedef struct registro registro;


double media(double s){
    double m=0;

    m=s/5;

    return m;
}

void precosbaixos(registro *l, double me){
    int j=0;


    printf("----------Lojas com o preco abaixo da media----------\n");
    for(j=0;j<5;j++){
        if(l[j].preco < me){
            printf("Loja: %s -- Telefone: %d\n",l[j].nome,l[j].telefone);
        }
    }
}


void cadastrar(){
    int i=0;
    registro lojas[5];
    double soma=0;
    double medias=0;

    for(i=0;i<5;i++){
        printf("Informe o nome da loja:\n");
        scanf("%s", lojas[i].nome);
        printf("Informe o numero de telefone:\n");
        scanf("%d",&lojas[i].telefone);

        while (getchar() != '\n');

        printf("Informe o preco da geladeira:\n");
        scanf("%lf",&lojas[i].preco);

        soma+=lojas[i].preco;
    }

    medias = media(soma);

    system("cls");

    printf("Media de precos:%.2lf\n",medias);

    precosbaixos(lojas,medias);
}


int main()
{
    cadastrar();

    return 0;
}