#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[500];
    int d,m,a;
}pessoa;

typedef struct{
    pessoa *cliente;
    int b,a,c;;
}conta;

pessoa dadosPessoais(const char *nome, const int d, const int m, const int a)
{
    pessoa novo;

    strcpy(novo.nome,nome);

    novo.d = d;
    novo.m = m;
    novo.a = a;

    return novo;
}

conta criarConta(pessoa *cliente, int b, int a, int c)
{
    conta novo;

    novo.cliente = cliente;
    novo.b = b;
    novo.a = a;
    novo.c = c;

    return novo;
}

int main()
{
    pessoa c1;
    conta b1;
    char nome[100] = "Joaquim Silva";
    int dia=1,mes=5,ano=2000,banco=1,agencia=8731,conta=12489;

    c1 = dadosPessoais(nome,dia,mes,ano);
    b1 = criarConta(&c1,banco,agencia,conta);

    system("cls");

    printf("Cliente: %s\n",b1.cliente->nome);
    printf("Banco: %d\n",b1.b);

    return 0;
}