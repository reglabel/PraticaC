#include <stdio.h>
#define MAXALUNOS 3

struct TAluno{
	char nome[100];
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
	printf("Nome Aluno: ");
	fflush(stdin);
    fgets(novoAluno.nome, sizeof(novoAluno.nome), stdin);

	novoAluno.matricula = 12;

	novoAluno.notas[0] = 6.8;
	novoAluno.notas[1] = 8.2;
	novoAluno.notas[2] = 9.7;

	float somaNotas = 0;
	int i;

	for(i = 0; i < 3; i++){
		somaNotas += novoAluno.notas[i];
	};

	novoAluno.media = somaNotas/3;

	printf("\nO aluno %s, matricula %d, possui media %f.", novoAluno.nome, novoAluno.matricula, novoAluno.media);

  return 0;
}