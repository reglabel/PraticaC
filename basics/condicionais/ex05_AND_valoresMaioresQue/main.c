#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1, valor2, valor3;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    if(valor1 > 10 && valor2 > 10 && valor3 > 10){
        printf("Todos os valores sao maiores que 10!");
    } else{
        printf("Um ou mais valores nao sao maiores que 10.");
    };
    return 0;
}