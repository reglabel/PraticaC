#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main(){
    int matriz1[2][2] = {{1,2},{3,4}};
    float matriz2[5][5];
    char matriz3[TAM][TAM];

    matriz1[0][0] = 7;
    int valor = matriz1[1][0];
    printf("Digite valor para atribuir em matriz 2: ");
    scanf("%f", &matriz2[0][0]);
    printf("%f\n", matriz2[0][0]);

    printf("\nImprimindo matriz1: \n");
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    return 0;
}