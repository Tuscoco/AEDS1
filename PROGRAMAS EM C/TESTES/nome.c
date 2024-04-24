#include <stdio.h>
int main ()
{
    char nome[30],sobrenome[30],ultimonome[30];
    //pra salvar nome precisa do char e do %s
    printf("Qual o seu nome:\n");
    scanf("%s",nome);
    printf("Qual o seu nome do meio:\n");
    scanf("%s",sobrenome);
    printf("Qual o seu ultimo nome:\n");
    scanf("%s",ultimonome);
    printf("Ola Sr(a).%s %s %s",nome,sobrenome,ultimonome);
    return 0;
}