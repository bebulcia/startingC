#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float raio = 0.0;
    float area = 0.0, circunferencia = 0.0;
    const float pi = 3.14;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;

    circunferencia = 2 * pi * raio;

    printf("A área do círculo com raio %.2f é %.2f\n", raio, area);
    printf("A circunferência do círculo com raio %.2f é %.2f\n", raio, circunferencia);

    return 0;
}