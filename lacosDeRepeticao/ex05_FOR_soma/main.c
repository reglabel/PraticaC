#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        for(int i = 0; i <=10; i++){
            ...
        } -> Gera erro: ‘for’ loop initial declarations are only allowed in C99 mode

        "Declaring variables inside a for loop wasn't valid C until C99(which is the standard of C published in 1999), you can either declare your counter outside the for as pointed out by others or use the -std=c99 flag to tell the compiler explicitly that you're using this standard." - Stack Overflow
        
        gcc main.c -o main -std=c99
    */

    int soma = 0, i;
    for(i = 0; i <10; i++){
        soma += i;
        printf("Soma: %d\n", soma);
    }
    return 0;
}