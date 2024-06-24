#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int horas;
    int minutos;
    int segundos;
} horario;

typedef struct{
    int dia;
    int mes;
    int ano;
} data;

typedef struct{
    horario t;
    data d;
}dataTempo;

typedef struct{
    char nome[500];
    float preco;
    int quantidade;
    dataTempo registro;
}venda;

int main()
{}