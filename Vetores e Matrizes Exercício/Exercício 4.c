#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAXROW      10
#define MAXCOL      10

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, j;
	int m [3][5];
	int n [3][5];
	int s [3][5];
	
	printf("Exercício 1 - Somar matriz M com matriz N!\n\n");
	printf("Digite os números da matriz M: \n\n" );
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 5; j++)
		{
			
			printf("[%d][%d]: ",i + 1, j + 1);
			scanf("%d", &m[i][j]);
			
		}
		
		printf("\n");
	}
	
	printf("Digite os número da matriz N: \n\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("[%d][%d]: ",i + 1, j + 1);
			scanf("%d", &n[i][j]);
			
		}	
		
		printf("\n");
		
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d	", m[i][j]);
		}
		
		if(i == 1)
		{
			printf("+");
		}
		
		for(j = 0; j < 5; j++)
		{
			printf("	%d", n[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\nA soma da matriz M com a matriz N é igual a: \n\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 5; j++)
		{
			s[i][j] = m[i][j] + n[i][j];
			printf("%d\t", s[i][j]);	
			
		}
		
		printf("\n");	
				
	}
	
	
	
	printf("\n------------------------------\n");
	printf("\nExercício 2 - Multiplicação de uma matriz 3x3 por um escalar k = 5.\n\n");
	
	int x, y;
	int a [3][3];
	int k = 5;
	
	printf("Digite os números da matriz: \n\n");
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			printf("[%d][%d]: ", x + 1, y + 1);
			scanf("%d", &a[x][y]);
			
			a[x][y] *= k;
		}
		
		printf("\n");
	}
	
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			printf("%d x 5\t", a[x][y]);
			
		}
		
		printf("\n");
	}
	
	printf("\nO resultado da multiplicação é: \n\n");
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			printf("%d\t", a[x][y]);
		}
		
		printf("\n");
	}
	
	printf("\n------------------------------\n");
	printf("\nExercício 3 - Escrever partes da matriz.\n\n");
	
	int q, w, t;
	int b [5][5];
	int soma = 0;
	
	
	printf("Digite os números da matriz: \n\n");
	for (q = 0; q < 5; q++)
	{
		for (w = 0; w < 5; w++)
		{
			printf("[%d][%d]: ", q + 1, w + 1);
			scanf("%d", &b[q][w]);
		
		}
	
		printf("\n");
	}
	
	for (q = 0; q < 5; q++)
	{
		for (w = 0; w < 5; w++)
		{
			printf("%d\t", b[q][w]);
			
		}
		
		printf("\n");
	}
	
	printf("\n\nDiagonal principal é igual a: \n\n");
	for (q = 0; q < 5; q++)
	{
		for (w = 0; w < 5; w++)
		{
			if (q == w)
			{
				for (t = 0; t < w; t++)
				{
					printf("	");
					
				}
				printf("%d\n", b[q][w]);
		
			}
			
		}
		
	}
	
	printf("\nDiagonal secundária é igual a: \n\n");
	for (q = 0; q < 5; q++)
	{
		for (w = 0; w < 5; w++)
		{
			if (q + w == 4)
			{
				for (t = w; t > 0; t--)
				{
					printf("	");
					
				}
				printf("%d\n", b[q][w]);
		
			}
			
		}
		
	}
	
	for (q = 0; q < 5; q++)
	{
		for (w = 0; w < 5; w++)
		{
			if (q == 3)
			{
				soma += b[q][w];
			}
		}
	}
	printf("\nA soma da linha 4 é igual a %d!\n\n", soma);
	
	soma = 0;
	for (q = 0; q < 5; q++)
	{
		for (w = 0; w < 5; w++)
		{
			if (w == 1)
			{
				soma += b[q][w];
			}
		}
	}
	printf("\nA soma da coluna 2 é igual a %d!\n\n", soma);
	
	return 0;
}
