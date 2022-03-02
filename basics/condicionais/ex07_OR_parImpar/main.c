#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1, valor2;
    scanf("%d", &valor1);
    scanf("%d", &valor2);

    if((valor1 % 2 == 0) || (valor2 % 2 == 0)){
        printf("Pelo menos um dos valores eh par.");
    } else{
        printf("Nenhum dos valores eh par.");
    };
    return 0;
}