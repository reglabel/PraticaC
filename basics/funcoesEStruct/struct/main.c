#include <stdio.h>
#define MAXALUNOS 3

struct TAluno{
	int matricula;
	float notas[3];
	float media;
};

struct endereco{
	char logradouro [50];
	int numero;
	char cidade[30];
	char estado[2];
};

int main(void) {
    struct TAluno novoAluno;
	struct endereco end1, end2;

  return 0;
}