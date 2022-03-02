#include <stdio.h>
#include <stdlib.h>
int valor = 0;

void ateDez(){
    if(valor < 10){
        printf("%d\n", valor);
        valor++;
        ateDez();
    };
}

int main(){
    ateDez();
    printf("FIM");
    return 0;
}