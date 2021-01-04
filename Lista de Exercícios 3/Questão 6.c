#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int AreaRect (int a, int b)
{
	int area;
	
	area = a * b;
	
	printf("A área do retângulo é igual a %d!", area);
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a, b;
	
	printf("Digite a base do retângulo: ");
	scanf("%d", &a);
	
	printf("Digite a altura do retângulo: ");
	scanf("%d", &b);
	
	AreaRect(a, b);
	
	return 0;
}
