#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float raio = 0.0, volume = 0.0;
    const float pi = 3.14159;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0 / 3.0) * pi * raio * raio * raio;

    printf("O volume da esfera com raio %.2f é %.2f\n", raio, volume);

    return 0;
}