#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1, valor2, opcao, resultado;

    scanf("%d", &valor1);
    scanf("%d", &valor2);

    printf("1 - SOMAR\n");
    printf("2 - SUBTRAIR\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            resultado = valor1 + valor2;
            printf("Resultado SOMA: %d", resultado);
            break;

        case 2:
            resultado = valor1 - valor2;
            printf("Resultado SUBTRACAO: %d", resultado);
            break;

        default:
            printf("Opcao invalida!");
            break;
    }

    return 0;
}