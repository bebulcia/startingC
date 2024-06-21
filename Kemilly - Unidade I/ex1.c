#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero = 0, sucessor = 0, antecessor = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    printf("O antecessor desse número é %d\n", antecessor);
    printf("O sucessor desse número é %d\n", sucessor);

    return 0;
}