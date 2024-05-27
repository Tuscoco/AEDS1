#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[500];
    int dia;
    char mes[10];
}registro;

void cadastrar(registro *pessoa)
{
    int i;
    
    for(i=0;i<5;i++){
        printf("Informe seu nome:\n");
        scanf("%[^\n]", pessoa[i].nome);
        printf("Informe o dia do seu aniversario:\n");
        scanf("%d", &pessoa[i].dia);

        while (getchar() != '\n');

        printf("Informe o mes do seu aniversario:\n");
        scanf("%s", pessoa[i].mes);

        while (getchar() != '\n');
    }
    system("cls");
}

int main()
{

    registro cadastro[5];
    int i=0;

    cadastrar(cadastro);

    system("cls");

    printf("----------JANEIRO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Janeiro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------FEVEREIRO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Fevereiro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------MARCO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Marco") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------ABRIL----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Abril") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------MAIO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Maio") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------JUNHO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Junho") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------JULHO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Julho") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------AGOSTO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Agosto") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------SETEMBRO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Setembro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------OUTUBRO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Outubro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------NOVEMBRO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Novembro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------DEZEMBRO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Dezembro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    return 0;
}