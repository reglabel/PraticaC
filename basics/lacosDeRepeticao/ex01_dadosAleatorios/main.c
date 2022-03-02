#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int opcao = 0, dado1, dado2, dado3, soma;

    while (opcao != 2){
        printf("\n\tMENU\n1 - Jogar dados\n2 - Sair\nSua opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                dado1 = (rand() % 6) + 1;
                dado2 = (rand() % 6) + 1;
                dado3 = (rand() % 6) + 1;

                soma = dado1 + dado2 + dado3;

                printf("O resultado eh: %d + %d + %d = %d!\n", dado1, dado2, dado3, soma);
                break;

            case 2:
                printf("\nObrigado por jogar!\n");
                break;

            default:
                printf("\nOpcao invalida! Tente de novo!\n");
                break;
        }
    };

    return 0;
}