#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra1, letra2;
    printf("Digite a primeira letra: ");
    scanf("%c", &letra1);
    printf("Valor lido: %c", letra1);
    fflush(stdin);
    printf("\nDigite a segunda letra: ");
    scanf("%c", &letra2);
    printf("Valor lido: %c", letra2);
    fflush(stdin);

    printf("\nResultado: %c%c", letra1, letra2);
    return 0;
}