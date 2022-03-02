#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor, i = 0;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    while(i <= valor){
        if(i % 2 == 0){
            printf("Valor par: %d\n", i);
        }
        i = i + 1;
    }
    return 0;
}