#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct registro{
    char nome[50];
    int horas;
    char pagina;
    double total;
};
typedef struct registro registro;


void relatorio(registro *vet){
    int j=0;
    int cont=0;

    for(j=0;j<5;j++){
        vet[j].total = 0;
        if(vet[j].horas < 20){
            vet[j].total += 35;
            if(vet[j].pagina == 'S'){
                vet[j].total += 40;
            }
        }else{
            cont = vet[j].horas - 20;
            cont*=2.5;
            vet[j].total += 35 + cont;
            if(vet[j].pagina == 'S'){
                vet[j].total += 40;
            } 
        }
    }

    for(j=0;j<5;j++){
        printf("----------%s----------\n",vet[j].nome);
        printf("Valor a pagar: %.2lf\n",vet[j].total);
        printf("------------------------------------\n");
    }
}


void registrar(){
    int i=0;
    registro cliente[5];

    for(i=0;i<5;i++){
        printf("Informe o nome do cliente:\n");
        scanf("%s", cliente[i].nome);
        printf("Informe a quantidade de horas de acesso:\n");
        scanf("%d",&cliente[i].horas);

        while (getchar() != '\n');


        printf("O cliente possui pagina(S ou N):\n");
        scanf("%c",cliente[i].pagina);

        while (getchar() != '\n');
    }

    relatorio(cliente);
}


int main()
{
    registrar();

    return 0;
}