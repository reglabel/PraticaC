#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor;
    printf("Informe o valor: ");
    scanf("%d", &valor);
    if(valor % 2 == 0){
        printf("O valor inserido eh par!");
    } else{
        printf("O valor inserido eh impar!");
    };
    return 0;
}