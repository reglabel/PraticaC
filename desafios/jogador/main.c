#include <stdio.h>
#include "Jogador.c"
#include <stdbool.h>


int main(void) {
  TJogador jogador1;
  atribui(&jogador1, 9, 5, 2);
  imprime(&jogador1);
  if(ehBom(&jogador1)){
		printf("Eh um bom jogador!\n");
	} else{
		printf("Nao eh um bom jogador!\n");
	}

	TJogador jogador2;
  atribui(&jogador2, 6, 1, 4);
  imprime(&jogador2);
  if(ehBom(&jogador2)){
		printf("Eh um bom jogador!\n");
	} else{
		printf("Nao eh um bom jogador!\n");
	}

	TJogador jogador3;
  atribui(&jogador3, 5, 0, 1);
  imprime(&jogador3);
  if(ehBom(&jogador3)){
		printf("Eh um bom jogador!\n");
	} else{
		printf("Nao eh um bom jogador!\n");
	}

	TJogador jogador4;
  atribui(&jogador4, 3, 3, 0);
  imprime(&jogador4);
  if(ehBom(&jogador4)){
		printf("Eh um bom jogador!\n");
	} else{
		printf("Nao eh um bom jogador!\n");
	}

  return 0;
}
