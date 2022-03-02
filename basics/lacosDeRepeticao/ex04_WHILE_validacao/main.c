#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1 = 0, valor2 = 0;

    while(!(valor1 > 5 && valor1 < 10) || !(valor2 > 5 && valor2 < 10)){
        printf("Digite os valores: ");
        scanf("%d %d", &valor1, &valor2);
    };

    printf("O resultado eh: %d", (valor1 + valor2));

    /*int valor1, valor2, soma, validar = 1;

    while(validar = 1){
        printf("Digite os valores: ");
        scanf("%d %d", &valor1, &valor2);

        if((valor1 > 5 && valor1 < 10) && (valor2 > 5 && valor2 < 10)){
            soma = valor1 + valor2;
            printf("O resultado eh: %d", soma);
            break;
        }

        printf("Valores invalidos. Tente novamente.\n");
    }*/

    return 0;
}