#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor, i;

    printf("Valor da tabuada: ");
    scanf("%d", &valor);
    printf("\t-=- TABUADA -=-\n");

    for(i = 0; i <=10; i++){
        printf("%d x %d = %d\n", i, valor, (valor * i));
    }
    return 0;
}