#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float quilometros = 0.0, milhas = 0.0;

    printf("Digite uma dist�ncia em quil�metros: ");
    scanf("%f", &quilometros);

    milhas = quilometros * 0.621371;

    printf("%.2f quil�metros � igual a %.2f milhas\n", quilometros, milhas);

    return 0;
}