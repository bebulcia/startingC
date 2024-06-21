#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float metros = 0.0, centimetros = 0.0;

    printf("Digite uma distância em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("%.2f metros é igual a %.2f centímetros\n", metros, centimetros);

    return 0;
}