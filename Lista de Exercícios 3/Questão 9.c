#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma_pares (int n)
{	
	
	int x = 0;
	int i, j;
	
	for(i = 0, j = 0; j < n; i++)
	{
		if (i % 2 == 0)
		{
			x += i;
			j++;
		}
	}
	
	printf("A soma dos %d primeiros números ímpares é igual a %d!", n, x);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	soma_pares(n);
	
	return 0;
}
