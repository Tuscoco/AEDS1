#include <stdio.h>

int main() {
    float salario_minimo, quantidade_kw, valor_kw, valor_total, valor_com_desconto;

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite a quantidade de kilowatts gasta pela residência: ");
    scanf("%f", &quantidade_kw);

    valor_kw = (salario_minimo / 7) / 100;
    valor_total = valor_kw * quantidade_kw;
    valor_com_desconto = valor_total * 0.9;

    printf("Valor de cada kilowatt: R$ %.2f\n", valor_kw);
    printf("Valor total a ser pago: R$ %.2f\n", valor_total);
    printf("Valor com desconto de 10%%: R$ %.2f\n", valor_com_desconto);

    return 0;
}
