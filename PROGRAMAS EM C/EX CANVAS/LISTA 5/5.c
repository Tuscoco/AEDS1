#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 20;
    float num = 4.5;
    char c = 'A';
    int *x;
    float *y;
    char *z;

    x = &n;
    y = &num;
    z = &c;

    system("cls");

    printf("==========ANTES DA ALTERACAO==========\n");

    printf("Endereco de n:%p\n",x);
    printf("Endereco de num:%p\n",y);
    printf("Endereco de c:%p\n",z);
    printf("Conteudo de n:%d\n",n);
    printf("Conteudo de num:%f\n",num);
    printf("Conteudo de c:%c\n",c);

    printf("======================================\n");

    *x = 70;
    *y = 34567.7;
    *z = 'L';

    printf("==========DEPOIS DA ALTERACAO==========\n");

    printf("Endereco de n:%p\n",x);
    printf("Endereco de num:%p\n",y);
    printf("Endereco de c:%p\n",z);
    printf("Conteudo de n:%d\n",n);
    printf("Conteudo de num:%f\n",num);
    printf("Conteudo de c:%c\n",c);

    printf("========================================\n");

    return 0;
}