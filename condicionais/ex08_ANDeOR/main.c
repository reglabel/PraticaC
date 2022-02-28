#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1, valor2, soma;

    scanf("%d", &valor1);
    scanf("%d", &valor2);

    soma = valor1 + valor2;

    if(((soma > 0) && (soma < 10)) || (soma % 2 == 0)){
        printf("A soma estah entre 0 e 10 e/ou ela eh par");
    } else{
        printf("A soma nao estah entre 0 e 10 e nao eh par");
    }
    return 0;
}