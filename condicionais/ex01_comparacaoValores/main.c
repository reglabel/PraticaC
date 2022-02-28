#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1, valor2;
    printf("\nEscreva o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Escreva o segundo valor: ");
    scanf("%d", &valor2);

    int resultado = valor1 + valor2;
    if(resultado >= 10){
        printf("O resultado de %d eh MAIOR que 10.\n", resultado);
    } else{
        printf("O resultado de %d eh MENOR que 10.\n", resultado);
    };

    return 0;
}