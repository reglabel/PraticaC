#include <stdio.h>
#include <stdlib.h>

void desenhaSeparador(){
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
}

int main(){
    desenhaSeparador();
    printf("Ola, Mundo!");
    desenhaSeparador();
    printf("Tchau!");
    desenhaSeparador();
    return 0;
}