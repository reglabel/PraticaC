#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor;
    printf("Digite o valor: ");
    scanf("%d", &valor);
    if(valor > 0 && valor < 10){
        printf("Esse valor estah entre 0 e 10.");
    } else{
        if(valor < 0){
            printf("Esse valor eh negativo.");
        } else if(valor > 10){
            printf("Esse valor eh maior que 10.");
        } else{
            if(valor == 0){
                printf("Esse valor eh zero.");
            } else{
                printf("Esse valor eh dez.");
            };
        };
    };
    return 0;
}