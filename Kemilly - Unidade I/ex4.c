#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float metros = 0.0, centimetros = 0.0;

    printf("Digite uma dist�ncia em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("%.2f metros � igual a %.2f cent�metros\n", metros, centimetros);

    return 0;
}