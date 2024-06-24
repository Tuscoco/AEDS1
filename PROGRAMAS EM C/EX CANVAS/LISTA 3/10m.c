#include <stdio.h>
#include <stdlib.h>

char categorialNarrador(int i)
{
    if(i < 5){
        return NULL;
    }else if(i >= 5 && i <= 7){
        return 'F';
    }else if(i >= 8 && i <= 10){
        return 'E';
    }else if(i >= 11 && i <= 13){
        return 'D';
    }else if(i >= 14 && i <= 15){
        return 'C';
    }else if(i >= 16 && i <= 17){
        return 'B';
    }else if(i >= 18){
        return 'A';
    }
}

int main()
{
    int idade;
    char cat;

    printf("Informe sua idade: ");
    scanf("%d",&idade);

    cat = categorialNarrador(idade);

    system("cls");

    printf("===============\n");

    printf("Categoria: %c\n",cat);

    printf("===============\n");

    return 0;
}