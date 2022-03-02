#include <stdio.h>
#include <stdlib.h>
int valor = 0;

void imprimeSoma(int valor1, int valor2){
    printf("\nSOMA = %d", (valor1 + valor2));
}

int retornaSoma(int valor1, int valor2){
    return (valor1 + valor2);
}

float retornaSomaMais10(float valor){
    return (valor + 10);
}

int main(){
    int valor1, valor2;
    printf("Insira dois valores inteiros: ");
    scanf("%d %d", &valor1, &valor2);
    imprimeSoma(valor1, valor2);

    printf("\n\nResultado SOMA 20 + 30 = %d\n", retornaSoma(20, 30));

    float valorFinal = retornaSomaMais10(15.5);
    printf("\nValor com + 10 = %2.f", valorFinal);
    return 0;
}