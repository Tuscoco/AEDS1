#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct registro{
    char nome[500];
    int dia;
    char mes[10];
};

typedef struct registro registro;

int main()
{

    registro cadastro[5];
    int i=0;

    for(i=0;i<5;i++){
        printf("Informe seu nome:\n");
        scanf("%[^\n]", cadastro[i].nome);
        printf("Informe o dia do seu aniversario:\n");
        scanf("%d", &cadastro[i].dia);

        while (getchar() != '\n');

        printf("Informe o mes do seu aniversario:\n");
        scanf("%s", cadastro[i].mes);

        while (getchar() != '\n');
    }

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
        if(strcmp(cadastro[i].mes,"Janeiro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------ABRIL----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Janeiro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------MAIO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Janeiro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------JUNHO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Janeiro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------JULHO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Janeiro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------AGOSTO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Janeiro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------SETEMBRO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Janeiro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------OUTUBRO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Janeiro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------NOVEMBRO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Janeiro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    printf("----------DEZEMBRO----------\n");
    for(i=0;i<5;i++){
        if(strcmp(cadastro[i].mes,"Janeiro") == 0){
            printf("Nome: %s -- Dia: %d\n",cadastro[i].nome,cadastro[i].dia);
        }
    }
    printf("---------------------------\n");

    return 0;
}

//////////DÚVIDA