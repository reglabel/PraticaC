#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetorInteiros[] = {1, 3, 7, 4};
    float vetorDeFloat[] = {14.9, 34.8, 11.2};
    char vetorChar[] = {'a', 'b'};

    vetorInteiros[2] = 2;

    float valor = 5.7;
    vetorDeFloat[1] = valor;

    printf("Nova letra: ");
    fflush(stdin); //limpa buffer
    scanf("%c", &vetorChar[0]);

    int i = 0;
    printf("\nVetor de Inteiros.\n");
    for(i = 0; i < 4; i++){
        printf("%d\n", vetorInteiros[i]);
    }

    printf("\nVetor de Float.\n");
    for(i = 0; i < 3; i++){
        printf("%.2f\n", vetorDeFloat[i]);
    }

    printf("\nVetor de Char.\n");
    for(i = 0; i < 2; i++){
        printf("%c\n", vetorChar[i]);
    }

    printf("\nResetando Vetor de Inteiros.\n");
    for(i = 0; i < 4; i++){
        printf("Lendo na posicao[%d]: ", i);
        scanf("%d", &vetorInteiros[i]);
    }
    
    printf("\nVetor de Inteiros Atualizado.\n");
    for(i = 0; i < 4; i++){
        printf("%d\n", vetorInteiros[i]);
    }
    return 0;
}