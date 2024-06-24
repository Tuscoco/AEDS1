#include <stdio.h>
#include <stdbool.h>

int main() {
    int ano_nascimento, ano_atual;
    char fez_aniversario;
    int idade;
    bool pode_tirar_habilitacao;

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Você já fez aniversário este ano? (Digite S para sim ou N para não): ");
    scanf(" %c", &fez_aniversario);

    if (fez_aniversario == 'S' || fez_aniversario == 's') {
        idade = ano_atual - ano_nascimento;
    } else if (fez_aniversario == 'N' || fez_aniversario == 'n') {
        idade = ano_atual - ano_nascimento - 1;
    } else {
        printf("Resposta inválida.\n");
        return 1;
    }

    if (idade >= 18) {
        pode_tirar_habilitacao = true;
    } else {
        pode_tirar_habilitacao = false;
    }

    printf("Sua idade é: %d anos\n", idade);

    if (pode_tirar_habilitacao) {
        printf("Você já pode tirar a Carteira de Habilitação.\n");
    } else {
        printf("Você ainda não pode tirar a Carteira de Habilitação.\n");
    }

    return 0;
}
