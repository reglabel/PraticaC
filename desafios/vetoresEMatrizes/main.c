#include <stdio.h>
#include "funcoes/defs.c"

int main(void) {
	/* Questão 1 : 
	Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
	*/
    colherSeisNumeros();
    printf("\n");
	
	/* Questão 2
	Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a media geral.
	*/
	float alunos[15];
	colherImprimirECalcularMedia(alunos, 15);
    printf("\n");

	/* Questão 3
	Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.
	*/
	float valores3[5];
	analisarValoresRecebidos(valores3, 5);
    printf("\n");
  
	/* Questão 4
	Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com o maior, o menor e a media dos valores.
	*/
	int valores4[5];
	menorMaiorEMedia(valores4, 5);
    printf("\n");

	/* Questão 5
	Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.
	*/
	int valores5[5];
	posMenorMaior(valores5, 5);
    printf("\n");
	
	/* Questão 6
	Faça um programa que calcule o desvio padrão de um vetor v contendo n = 10 números, onde m e a media do vetor.
	*/
	float valores6[3];
	desvioPadraoEMedia(valores6, 3);
    printf("\n");

	/* Questão 7
	Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
	*/
	int matriz7[4][4];
	maioresValoresMatriz(matriz7);
    printf("\n");

	/* Questão 8
	Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.
	*/
	int matriz8[5][5];
	matrizDiagonal(matriz8);
    printf("\n");

	/* Questão 9
	Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.
	*/
	int matriz9[3][3];
	matrizSomaAcimaDiagonal(matriz9);
    printf("\n");

	/* Questão 10
	Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.
	*/
	int matriz10[3][3];
	matrizTransposta(matriz10);
    printf("\n");

	/* Questão 11
	Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo. Sabendo que cada cartela devera conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada.
	*/
	int matriz11[5][5];
	gerarCartelaBingo(matriz11);
    printf("\n");
	
	return 0;
}