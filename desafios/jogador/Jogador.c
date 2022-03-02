#include <stdio.h>
#include "Jogador.h"
#include <stdbool.h>

void atribui(TJogador *cod, int numeroJogos, int numeroGols, int numeroAssistencia){
	cod->jogos = numeroJogos;
	cod->gols = numeroGols;
	cod->assistencia = numeroAssistencia;
}

void imprime(TJogador *cod){
	printf("\nO JOGADOR possui: \t\n- JOGOS: %d \t\n- GOLS: %d \t\n- ASSISTENCIA: %d \n", cod->jogos, cod->gols, cod->assistencia);
}

bool ehBom(TJogador *cod){
	int pesoGol, pesoAssistencia;
	float fatorBom = 0;
	bool resposta = false;
	
	if(cod->gols != 0 && cod->assistencia != 0){
		if(cod->gols+cod->assistencia == cod->jogos){
			fatorBom +=2;
		}

		if(cod->gols > cod->assistencia){
			fatorBom +=1;
		}

		if(cod->jogos % 2 == 0){
			if(cod->gols >= (cod->jogos /2)){
				fatorBom +=1;
			}
		} else{
			if(cod->gols >= (((cod->jogos - 1)/2) + 1)){
				fatorBom +=1;
			}
		}
	} else{
		if(cod->jogos % 2 == 0){
			if(cod->gols >= (cod->jogos /2) || cod->assistencia >= (cod->jogos /2)){
				fatorBom +=2;
			}
		} else{
			if(cod->gols >= (((cod->jogos - 1)/2) + 1) || cod->assistencia >= (((cod->jogos - 1)/2) + 1)){
				fatorBom +=2;
			}
		}
	}

	if(fatorBom >= 2){
		resposta = true;
	} else{
		resposta = false;
	}

	return resposta;
}
