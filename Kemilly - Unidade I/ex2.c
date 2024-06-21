#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1 = 0, num2 = 0;
    int soma = 0, subtracao = 0, multiplicacao = 0;
    float divisao = 0.0;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    if (num2 != 0) {
        divisao = (float) num1 / num2;
    } else {
        printf("Não é possível uma divisão por 0\n");
    }

    
    printf("A soma desses números é %d\n", soma);
    printf("A subtração de %d por %d é %d\n", num1, num2, subtracao);
    printf("A multiplicação desses números é %d\n", multiplicacao);

    if (num2 != 0) {
        printf("A divisão de %d por %d é %.2f\n", num1, num2, divisao);
    }

    return 0;
}