#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Repetição de Nome.\n");
	
	char nome[50];
	int z = 0;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	
	while(z < 10 ) 
	{
		printf("%s \n",nome);
		
		z++;
	}
	
	
	printf("\nEscrever números inteiros, pares, positivos e menores que 20.\n");
	
	int i = 19;
	
	while((i < 20 ) && (i > 0))
	{
		if (i % 2 == 0)
		{
			printf("%d \n",i);
		}
		
		i--;
		
	}
	
	printf("\nLer um input e regredir até chegar em 0.\n");
	
	int n;
	int x;
	
	printf("Escreva um número: ");
	scanf("%d", &n);
	
	x = n - 1;
	
	while((x < n) && (x >= 0))
	{
		printf("%d\n",x);
		
		x--;
	}
	
	return 0;
}
