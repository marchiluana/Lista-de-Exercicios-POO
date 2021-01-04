#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Par e Ímpar!\n");
	int n [100];
	int i;
	
	for(i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			n[i] = 0;
			
			printf("%d ", n[i]);
		}	
		
		else
		{
			n[i] = 1;
			printf("%d ", n[i]);
		}
	
	}
	
	printf("\n\n----------------------------------------\n\n");
	printf("Soma dos inteiros de um Vetor!\n");
	
	
	int num [10];
	int soma = 0;
	int x;
	int y = 1;
	
	fflush(stdin);
	
	for(x = 0; x < 10; x++)
	{	
		printf("Escreva o %dº número: ",y);
		scanf("%d", &num[x]);
		
		soma += num[x];
		
		y++;
	}
	
	printf("A soma dos números inseridos é igual a %d!",soma);
	
	printf("\n\n----------------------------------------\n\n");
	printf("Multipliação entre Vetores\n");
	
	float n1 [20];
	int a;
	float n2 [20];
	float r [20];
	float mult;
	
	for(a = 1; a < 21; a++)
	{
		printf("\nDigite a %dª multiplicação X e Y! \n",a);
		a--;
		printf("X: ");
		scanf("%f", &n1[a]);
		
		printf("Y: ");
		scanf("%f", &n2[a]);

		mult = n1[a] * n2[a];
		
		r[a] = mult;
		
		printf("\n%.2f x %.2f = %.2f\n", n1[a], n2[a], r[a]);
		
		a++;
	}
	
		
	
	return 0;
	
	
}
