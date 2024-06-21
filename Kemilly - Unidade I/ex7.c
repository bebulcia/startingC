#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0;
    float media = 0.0;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média das notas %.2f, %.2f e %.2f é %.2f\n", nota1, nota2, nota3, media);

    return 0;
}