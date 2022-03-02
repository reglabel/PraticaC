typedef struct{
	int codigo;
	int aresta;
}TCubo;

void atribui(TCubo *cod, int valorAresta);
float area(TCubo *cod);
float volume(TCubo *cod);
int retornaAresta(TCubo *cod);
