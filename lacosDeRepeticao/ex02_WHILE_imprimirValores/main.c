#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor = 50;
    while(valor > -1){
        printf("Valor: %d\n", valor);
        valor = valor - 6;
    }
    return 0;
}