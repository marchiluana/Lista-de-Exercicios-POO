#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void divisao (float n1, float n2)
{
	float resultado;
	
	resultado = n1 / n2;
	
	printf("\nO resultado da divisão é igual a %.2f!", resultado);
		
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2;
	
	printf("Digite um dividendo (número a ser dividido): ");
	scanf("%f", &n1);
	
	printf("Digite um divisor (número que divide): ");
	scanf("%f", &n2);
	
	divisao(n1, n2);
	
	return 0;
}
