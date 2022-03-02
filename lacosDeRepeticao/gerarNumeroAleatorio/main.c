#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); //tempo como semente

    int r = rand() % 10; //numero aleatorio de 0 a 9. Restos das divisões de um número vão de 0 até o próprio número - 1.

    /*
    int r = (rand() % 10) + 5 //numero aletario entre 5 a 14
    */

    /*
    int maximo = 14;
    int minimo = 5;

    int r = (rand() % (maximo - minimo + 1)) + minimo //numero aletario entre (0 a 9) + 5
    */

    printf("Numero gerado: %d", r); //imprime o resultado

    return 0;
}