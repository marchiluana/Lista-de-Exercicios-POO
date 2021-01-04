#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	int soma = 0;
	
	for (i = 0; i <= 100; i++)
	{
		soma += i;
	}
	
	printf("A soma dos 100 primeiros números inteiros é %d!", soma);
	
	return 0;
}
