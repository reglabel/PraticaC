#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra1[] = "dog";
    char palavra2[5] = "doce";
    char palavra3[] = {'a', 'b', 'c', 'd', '\0'};
    char palavra4[5] = {'f', 'o', 'n', 'e', '\0'};

    char stringSemEspaco[100];
    char stringComEspaco[100];

    strcpy ( stringSemEspaco, "mundo" );
    printf("\n%s\n", stringSemEspaco);

    strcpy ( stringComEspaco , "Ola , Mundo!" );
    puts(stringComEspaco);

    printf("Digite uma string sem espaco: ");
    fflush(stdin);
    scanf("%s", stringSemEspaco); //ler string sem espaço. Perceba que não usamos & em vetores (tô lendo o vetor completo).

    printf("Digite uma string com espaco: ");
    fflush(stdin);
    fgets(stringComEspaco, sizeof(stringComEspaco), stdin); //ler string com espaco, é uma funcao especifica. significa (nomeDaString,tamanhoMaximo, porOndeALeituraVaiSerFeita)


    printf("\nNova string sem espaco: %s\n", stringSemEspaco);
    printf("\nNova string com espaco: %s\n", stringComEspaco);
    return 0;
}