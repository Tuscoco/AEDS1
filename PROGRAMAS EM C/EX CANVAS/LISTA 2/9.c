#include <stdio.h>

int main() {
    float preco_compra, preco_venda;
    float lucro;
    int count_lucro_menor_10 = 0, count_lucro_10_20 = 0, count_lucro_maior_20 = 0;
    float total_compra = 0, total_venda = 0, total_lucro = 0;

    printf("Digite o preco de compra da mercadoria (ou 0 para sair):\n");
    scanf("%f", &preco_compra);

    while (preco_compra != 0) {
        printf("Digite o preco de venda da mercadoria:\n");
        scanf("%f", &preco_venda);

        lucro = preco_venda - preco_compra;

        total_compra += preco_compra;
        total_venda += preco_venda;
        total_lucro += lucro;

        if (lucro < preco_compra * 0.1) {
            count_lucro_menor_10++;
        } else if (lucro >= preco_compra * 0.1 && lucro <= preco_compra * 0.2) {
            count_lucro_10_20++;
        } else {
            count_lucro_maior_20++;
        }

        printf("\nDigite o preco de compra da proxima mercadoria (ou 0 para sair):\n");
        scanf("%f", &preco_compra);
    }

    printf("\nQuantidade de mercadorias por faixa de lucro:\n");
    printf("Lucro < 10%%: %d mercadorias\n", count_lucro_menor_10);
    printf("10%% <= Lucro <= 20%%: %d mercadorias\n", count_lucro_10_20);
    printf("Lucro > 20%%: %d mercadorias\n", count_lucro_maior_20);

    printf("\nValores totais:\n");
    printf("Valor total de compra: %.2f\n", total_compra);
    printf("Valor total de venda: %.2f\n", total_venda);
    printf("Lucro total: %.2f\n", total_lucro);

    return 0;
}
