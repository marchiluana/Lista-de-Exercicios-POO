#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	int n;
	int soma = 0;
	int maior = 0;	
	int div = 0;
	
	printf("Digite 10 números! \n\n");
	
	for (i = 1; i <= 10; i++)
	{
		printf ("Digite o %dº número: ", i);
		scanf("%d", &n);
		
		soma += n;
		
		if (n > 10)
		{
			maior++;
		}
		
		if (n % 2 == 0)
		{
			div++;
		}
	}
	
	printf("\nA soma dos 10 números digitados é igual a %d! \n", soma);
	printf("Dentre os números digitados, %d são maiores do que 10! \n", maior);
	printf("%d números sao divisíveis por 2! \n", div);
	
	return 0;
}
