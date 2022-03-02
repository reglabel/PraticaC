#include <stdio.h>
#include <stdlib.h>

int main(){
    int valorInicial, valorFinal , passo, i;

    printf("Digite o valor inicial: ");
    scanf("%d", &valorInicial);
    printf("Digite o valor final: ");
    scanf("%d", &valorFinal);
    printf("Digite o passo: ");
    scanf("%d", &passo);

    for(i = valorInicial; i <= valorFinal; i += passo){
        printf("Valor i: %d\n", i);
    }
    return 0;
}