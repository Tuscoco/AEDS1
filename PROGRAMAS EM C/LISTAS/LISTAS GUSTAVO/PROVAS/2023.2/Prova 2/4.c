#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[500];
    int d,m,a;
}pessoa;

typedef struct{
    pessoa *cliente;
    int b,a,c;
}conta;

pessoa cadastrar(const char *nome, const int d, const int m, const int a)
{
    pessoa cliente;

    strcpy(cliente.nome,nome);

    cliente.d = d;
    cliente.m = m;
    cliente.a = a;

    return cliente;
}

conta Cconta(const pessoa *cl, const int b, const int a, const int c)
{
    conta nova;
    
    nova.cliente = cl;
    nova.b = b;
    nova.a = a;
    nova.c = c;

    return nova;
}