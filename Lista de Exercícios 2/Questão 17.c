#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	
	printf("Digite um número: ");
	scanf("%d", &x);
	
	printf("Digite um segundo número: ");
	scanf("%d", &y);
	
	if (x > 0 && y > 0)
	{
		x *= y;
		
		printf("A multiplicação dos dois números é igual a %d!",x);
	}
	
	else 
	{
		printf("Digite números positivos!");
	}

	
	return 0;
}
