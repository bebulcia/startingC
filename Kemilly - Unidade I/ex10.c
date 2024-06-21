#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float massa, energia;
    const float velocidade_luz = 299792458.0;

 
    printf("Digite o valor da massa (em kg): ");
    scanf("%f", &massa);

  
    energia = massa * velocidade_luz * velocidade_luz;
    
    printf("A energia do corpo é: %.10f joules\n", energia);

  return 0;
}