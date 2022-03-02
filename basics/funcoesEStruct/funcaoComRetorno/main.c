#include <stdio.h>
#include <stdlib.h>
int valor = 0;

int retorna14(){
    return 14;
}

float retorna98PorCento(){
    return 0.98;
}

char retornaB(){
    return 'B';
}

int main(){
    printf("Inteiro: %d\n", retorna14());
    printf("Float: %.2f\n", retorna98PorCento());
    printf("Char: %c\n", retornaB());
    return 0;
}