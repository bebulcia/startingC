#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float base = 0.0, altura = 0.0, area = 0.0;

    printf("Digite o valor da base do tri�ngulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do tri�ngulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A �rea do tri�ngulo com base %.2f e altura %.2f � %.2f\n", base, altura, area);

    return 0;
}