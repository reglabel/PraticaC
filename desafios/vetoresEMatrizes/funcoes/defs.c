#include <stdio.h>
#include <stdlib.h>
#include "defs.h"
#include <math.h>
#include <time.h>

void colherSeisNumeros(){
    printf("\n");
    
	int vetor[6], num, i;
	
	for(i = 0; i < 6; i++){
		printf("Digite o %d numero: ", (i+1));
		scanf("%d", &num);

		vetor[i] = num;
	}

	system("cls");

	printf("\nA lista possui os numeros: \n");
	for(i = 0; i < 6; i++){
		printf("\t - %d\n", vetor[i]);
	}
}

float colherImprimirECalcularMedia(float *vetor, int tamanho){
    printf("\n");

	float num, media = 0;
    int i;

	for(i = 0; i < tamanho; i++){
		printf("Digite a %d nota: ", (i+1));
		scanf("%f", &num);

		vetor[i] = num;
		media += vetor[i];
	}

	media /= tamanho;
	
	system("cls");

	printf("\n\tA media dos %d alunos eh %.2f!", tamanho, media);
	return media;
}

void analisarValoresRecebidos(float *vetor, int tamanho){
    printf("\n");

	float num, sumPositivos = 0;
	int qtdNegativos = 0, i;

	for(i = 0; i < tamanho; i++){
		printf("Digite o %d numero: ", (i+1));
		scanf("%f", &num);
		vetor[i] = num;

		if(num > 0){
			sumPositivos += num;
		} else if (num < 0){
			qtdNegativos += 1;
		}
	}

	system("cls");

	printf("\n\tO vetor contem %d numeros negativos.\n\tA soma de numeros positivos do vetor eh %.2f", qtdNegativos, sumPositivos);
}

void menorMaiorEMedia(int *vetor, int tamanho){
    printf("\n");

	int num, maiorValor, menorValor, i;
	float media;

	for(i = 0; i < tamanho; i++){
		printf("Digite o %d valor: ", (i+1));
		scanf("%d", &num);

		vetor[i] = num;
		media += vetor[i];

		if(i == 0){
			menorValor = vetor[0];
			maiorValor = vetor[0];
		} else{
			if(vetor[i] < menorValor){
				menorValor = vetor[i];
			}

			if(vetor[i] > maiorValor){
				maiorValor = vetor[i];
			}
		}
	}

	media /= tamanho;

	system("cls");

	printf("\nA lista possui os numeros: \n");
	for(i = 0; i < tamanho; i++){
		printf("\t - %d\n", vetor[i]);
	}
	printf("\n\tO maior valor eh: %d\n\tO menor valor eh: %d\n\tA media de valores eh: %.2f", maiorValor, menorValor, media);
}

void posMenorMaior(int *vetor, int tamanho){
    printf("\n");

	int num, posMaior, posMenor, maiorValor, menorValor, i;
	for(i = 0; i < tamanho; i++){
		printf("Digite o %d valor: ", (i+1));
		scanf("%d", &num);

		vetor[i] = num;
		
		if(i == 0){
			menorValor = vetor[0];
			posMenor = 0;
			maiorValor = vetor[0];
			posMaior = 0;
		} else{
			if(vetor[i] < menorValor){
				posMenor = i;
			}

			if(vetor[i] > maiorValor){
				posMaior = i;
			}
		}
	}

	system("cls");

	printf("\n-> O maior valor se encontra na posicao de vetor: %d (eh o %d elemento)\n-> O menor valor se encontra na posicao de vetor: %d (eh o %d elemento)", posMaior, (posMaior + 1), posMenor, (posMenor + 1));
}

void desvioPadraoEMedia(float *vetor, int tamanho){
    printf("\n");

	float num, media = 0, desvio = 0;
    int i;
	for(i = 0; i < tamanho; i++){
		printf("Digite o %d valor: ", (i+1));
		scanf("%f", &num);

		vetor[i] = num;
		media += vetor[i];
	}

	media /= tamanho;
	for(i = 0; i < tamanho; i++){
		desvio += (vetor[i] - media)*(vetor[i] - media);
	}

	desvio /= tamanho;
	desvio = sqrt(desvio);

	system("cls");

	printf("\nO vetor possui media %.2f, com desvio padrao de %.3f.", media, desvio);
}

void maioresValoresMatriz(int matriz[4][4]){
    printf("\n");

	int num, qtdMaiorQDez = 0, l, c;

	for(l = 0; l < 4; l++){
		for(c = 0; c < 4; c++){
			printf("Digite valor da %d linha e %d coluna: ", (l + 1), (c + 1));
			scanf("%d", &num);

			matriz[l][c] = num;

			if(matriz[l][c] > 10){
				qtdMaiorQDez += 1;
			}
		}
	}

	system("cls");

	printf("\nA matriz possui %d numeros maiores que 10.", qtdMaiorQDez);
	if(qtdMaiorQDez > 0){
		printf("\nOs valores sao: ");
		for(l = 0; l < 4; l++){
			for(c =0; c < 4; c++){
				if(matriz[l][c] > 10){
					printf("\n\t - %d", matriz[l][c]);
				}
			}
		}
	}
}

void matrizDiagonal(int matriz[5][5]){
    printf("\n");

    int l, c;
	printf("A matriz requisitada eh: \n");
	for(l = 0; l < 5; l++){
		for(c = 0; c < 5; c++){
			if(l == c){
				matriz[l][c] = 1;
			} else{
				matriz[l][c] = 0;
			}

			printf("\t%d", matriz[l][c]);
		}
		printf("\n");
	}
}

void matrizSomaAcimaDiagonal(int matriz[3][3]){
    printf("\n");

	int num, soma=0, l, c;
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			printf("Digite valor da %d linha e %d coluna: ", (l + 1), (c + 1));
			scanf("%d", &num);

			matriz[l][c] = num;

			if(c>l){
				soma += matriz[l][c];
			}
		}
	}

	system("cls");

	printf("A matriz requisitada eh: \n");
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			printf("\t%d", matriz[l][c]);
		}
		printf("\n");
	}
	printf("\nA soma dos elmentos acima da diagonal principal eh %d!", soma);
}

void matrizTransposta(int matriz[3][3]){
    printf("\n");

	int num, l, c;
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			printf("Digite valor da %d linha e %d coluna: ", (l + 1), (c + 1));
			scanf("%d", &num);
			matriz[c][l] = num;
		}
	}

	system("cls");

	printf("A transposta dessa matriz eh: \n");
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			printf("\t%d", matriz[l][c]);
		}
		printf("\n");
	}
}

void gerarCartelaBingo(int matriz[5][5]){
    printf("\n");

	srand(time(NULL));
	int valorDaVez, cont = 0, vetor[25], l, c, i;
	printf("A cartela de bingo requisitada eh: \n");
	for(l = 0; l < 5; l++){
		for(c = 0; c < 5; c++){
			if(l == 0 && c == 0){
				matriz[l][c] = (rand() % 99);
				vetor[0] = matriz[l][c];
				cont++;
			} else{
				valorDaVez = (rand()%99);

				for(i = 0; i < cont; i++){
					while(valorDaVez == vetor[i]){;
						valorDaVez = (rand()%99);
					}
				}

				matriz[l][c] = valorDaVez;
				vetor[cont] = matriz[l][c];
				cont++;
			}
			printf("\t%d", matriz[l][c]);
		}
		printf("\n");
	}
}