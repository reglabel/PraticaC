#include <stdio.h>
#include "Cubo.c"

int main(void) {
  TCubo cubo1;
	atribui(&cubo1, 8);
	printf("\nCUBO\n\t - Aresta: %d\n\t - Area: %.2f\n\t - Volume: %.2f\n", retornaAresta(&cubo1), area(&cubo1), volume(&cubo1));

	TCubo cubo2;
	atribui(&cubo2, 6);
	printf("\nCUBO\n\t - Aresta: %d\n\t - Area: %.2f\n\t - Volume: %.2f\n", retornaAresta(&cubo2), area(&cubo2), volume(&cubo2));

	TCubo cubo3;
	atribui(&cubo3, 20);
	printf("\nCUBO\n\t - Aresta: %d\n\t - Area: %.2f\n\t - Volume: %.2f\n", retornaAresta(&cubo3), area(&cubo3), volume(&cubo3));
  return 0;
}