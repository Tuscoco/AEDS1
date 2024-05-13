#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct registro{
    char nome[50];
    int horas;
    char pagina;
    double total = 0;
};
typedef struct registro registro;


void relatorio(registro *vet){
    int j=0;

    for(j=0;j<5;j++){
        if(vet[j].horas < 20){
            vet[j].total += 35;
            if(vet[j].pagina == 'S'){
                vet[j].total += 40;
            }
        }else{}
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
        printf("O cliente possui pagina(S ou N):\n");
        scanf("%c",cliente[i].pagina);
    }

    relatorio(cliente);
}