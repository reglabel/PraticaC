#include "Cubo.h"
#include <math.h>

void atribui(TCubo *cod, int valorAresta){
	cod->aresta = valorAresta;
}

float area(TCubo *cod){
	float area; //A = 6*(a^²)
	//area = cod->aresta * cod->aresta;
	area = 6*(pow((cod->aresta), 2));
	return area;
}

float volume(TCubo *cod){
	float volume; //A = a^3
	//volume = cod->aresta * cod->aresta * cod->aresta;
	volume = pow((cod->aresta), 3);
	return volume;
}

int retornaAresta(TCubo *cod){
	return cod->aresta;
}