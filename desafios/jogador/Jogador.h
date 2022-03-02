#include <stdbool.h>

typedef struct{
  int codigo;
	int gols;
	int assistencia;
  int jogos;
}TJogador;

void atribui(TJogador *cod, int numeroJogos, int numeroGols, int numeroAssistencia);
void imprime(TJogador *cod);
bool ehBom(TJogador *cod);
