#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1, valor2;
    printf("Digite o 1 valor: ");
    scanf("%d", &valor1);
    printf("Valor lido: %d", valor1);
    printf("\nDigite o 2 valor: ");
    scanf("%d", &valor2);
    printf("Valor lido: %d", valor2);
    
    int resultado = valor1 + valor2;

    printf("\nResultado: %d", resultado);
    return 0;
}