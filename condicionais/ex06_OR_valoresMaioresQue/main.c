#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1, valor2;

    scanf("%d", &valor1);
    scanf("%d", &valor2);

    if(valor1 > 10 || valor2 > 10){
        printf("Pelo menos um valor eh maior que 10.");
    } else{
        printf("Nenhum valor eh maior que 10.");
    };
    return 0;
}