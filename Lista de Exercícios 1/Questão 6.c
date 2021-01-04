#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Escreva um número e o programa responderá se é par ou ímpar: ");
	scanf("%d",&n);
	
	if (n % 2 == 0)
	{
		printf("%d é um número par!", n);
	}
	
	else 
	{
		printf("%d é um número ímpar!", n);
	}
	
	return 0;
}
