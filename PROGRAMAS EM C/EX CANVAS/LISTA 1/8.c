#include <stdio.h>

int main() {
    char opcao;
    float salario_atual, novo_salario;
    
    printf("Digite a opcao desejada (A, B ou C): ");
    scanf(" %c", &opcao);

    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salario_atual);

    switch (opcao) {
        case 'A':
        case 'a':
            novo_salario = salario_atual * 1.08;
            break;
        case 'B':
        case 'b':
            novo_salario = salario_atual * 1.11;
            break;
        case 'C':
        case 'c':
            if (salario_atual <= 1000) {
                novo_salario = salario_atual + 350;
            } else {
                novo_salario = salario_atual + 200;
            }
            break;
        default:
            printf("Opcao invalida.\n");
            return 1;
    }

    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}
