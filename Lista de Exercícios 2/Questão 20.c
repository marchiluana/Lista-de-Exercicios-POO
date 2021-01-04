#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float tempo;
	float velocidade;
	float distancia;
	float combustivel;
	
	printf("Digite quantas horas foram necessárias pra realizar o trajeto: ");
	scanf("%f", &tempo);
	
	printf("Digite qual foi a velocidade média em km/h durante o trajeto: ");
	scanf("%f", &velocidade);
	
	distancia = tempo * velocidade;
	printf("A distância percorrida durante o trajeto foi %.2f km!\n", distancia);
	
	combustivel = distancia / 12;
	printf("A quantidade de combustível usado durante o trajeto foi de %.2f litros!", combustivel);
	
	
	return 0;
}
