#include <stdio.h>

int main() {
    int numero, invertido;
    int centena, dezena, unidade;

    printf("Digite um número inteiro de três dígitos (CDU): ");
    scanf("%d", &numero);

    if (numero < 100 || numero > 999) {
        printf("O número digitado não tem três dígitos.\n");
        return 0;
    }

    centena = numero / 100;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;

    invertido = unidade * 100 + dezena * 10 + centena;

    printf("Número invertido (UDC): %d\n", invertido);

    return 0;
}
