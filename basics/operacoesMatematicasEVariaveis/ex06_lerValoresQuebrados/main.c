#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor1, valor2;
    printf("Digite o 1 valor: ");
    scanf("%.2f", &valor1);
    printf("Valor lido: %.2f", valor1);
    printf("\nDigite o 2 valor: ");
    scanf("%.2f", &valor2);
    printf("Valor lido: %.2f", valor2);
    
    float resultado = valor1 + valor2;

    printf("\nResultado: %.2f", resultado);
    return 0;
}