#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float celsius = 0.0, fahrenheit = 0.0;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("%.2f graus Celsius é igual a %.2f graus Fahrenheit\n", celsius, fahrenheit);

    return 0;
}