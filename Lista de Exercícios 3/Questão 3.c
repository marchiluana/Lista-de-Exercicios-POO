#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void linha(n, c)
{
	int i;
	
	printf("\n");
	
	for(i = 0; i < n; i++)
	{
		printf("%c", c);
		
	}
	
	
	printf("\n");
	
	printf("\n| Inteiros entre 1 e %d |\n", n);
	printf("----------------------------\n");
	
	for(i = 1; i <= n; i++)
	{
		printf("%d\n", i);
	}
	
	printf("----------------------------");

}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	char c;
	
	printf("Escreva um caractere: ");
	scanf("%c", &c);
	
	printf("Escreva um número: ");
	scanf("%d", &n);
	
	linha(n, c);
	
	return 0;
}
