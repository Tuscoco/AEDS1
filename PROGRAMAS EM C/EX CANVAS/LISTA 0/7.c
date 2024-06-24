#include <stdio.h>
#include <math.h>

int main() {
    float primeiro_termo, razao, quinto_termo;

    printf("Digite o primeiro termo da PG: ");
    scanf("%f", &primeiro_termo);

    printf("Digite a razão da PG: ");
    scanf("%f", &razao);

    quinto_termo = primeiro_termo * pow(razao, 4);

    printf("Quinto termo da PG: %.2f\n", quinto_termo);

    return 0;
}
