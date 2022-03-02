#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    if(valor1 > valor2){
        printf("O valor de %d eh maior que o de %d", valor1, valor2);
    } else if(valor2 > valor1){
        printf("O valor de %d eh maior que o de %d", valor2, valor1);
    } else{
        printf("Os valores inseridos sao iguais.");
    };
    return 0;
}