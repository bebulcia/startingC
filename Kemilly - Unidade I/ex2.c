#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1 = 0, num2 = 0;
    int soma = 0, subtracao = 0, multiplicacao = 0;
    float divisao = 0.0;

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &num2);

    
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    if (num2 != 0) {
        divisao = (float) num1 / num2;
    } else {
        printf("N�o � poss�vel uma divis�o por 0\n");
    }

    
    printf("A soma desses n�meros � %d\n", soma);
    printf("A subtra��o de %d por %d � %d\n", num1, num2, subtracao);
    printf("A multiplica��o desses n�meros � %d\n", multiplicacao);

    if (num2 != 0) {
        printf("A divis�o de %d por %d � %.2f\n", num1, num2, divisao);
    }

    return 0;
}