#include <stdio.h>

void conceito(int m){
    if(m<=39){
        printf("F\n");
    }else if(m>=40 && m<=59){
        printf("E\n");
    }else if(m>=60 && m<=69){
        printf("D\n");
    }else if(m>=70 && m<=79){
        printf("C\n");
    }else if(m>=80 && m<=89){
        printf("B\n");
    }else if(m>=90){
        printf("A\n");
    }
}

int main()
{
    int media,n,i=1;

    printf("Quantidade de alunos:\n");
    scanf("%d",&n);

    for( ;i<=n;i++){

        printf("Informe a media:\n");
        scanf("%d",&media);

        conceito(media);
    }

    return 0;
}