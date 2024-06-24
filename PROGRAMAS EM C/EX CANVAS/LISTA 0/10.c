#include <stdio.h>

int main() {
    int hora, minuto, minutos_passados;

    printf("Digite a hora (0 a 23): ");
    scanf("%d", &hora);

    printf("Digite o minuto (0 a 59): ");
    scanf("%d", &minuto);

    if (hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59) {
        minutos_passados = hora * 60 + minuto;
        printf("Minutos passados desde o início do dia: %d\n", minutos_passados);
    } else {
        printf("Hora ou minuto fora do intervalo válido.\n");
    }

    return 0;
}
