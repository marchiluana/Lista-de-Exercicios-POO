#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mult (int a, int b)
{
	int m;
	
	m = a * b;
	
	printf("A multiplicação dos dois números é igual a %d!", m);
}

int soma (int a, int b, int *s)
{
	*s = a + b;
}


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int s;
	int a, b;
	
	printf("Digite dois valores: ");
	
	printf("\n1º: ");
	scanf("%d", &a);
	
	printf("2º: ");
	scanf("%d", &b);
	
	//por valor
	mult (a, b);
	
	//por referência
	soma (a, b, &s);
	
	printf("\nA soma dos dois números é igual a %d!", s);
		
	
	return 0;
}
