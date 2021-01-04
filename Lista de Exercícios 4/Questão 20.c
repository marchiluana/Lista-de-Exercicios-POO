#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, x;
	char m [3][3];
	int k;
	
	printf("Digite o valor da constante: ");
	scanf("%d", &k);
	
	printf("\nDigite os valores da matriz: \n\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("[%d][%d]->", i + 1, j + 1);
			scanf("%d", &m[i][j]);
			
			
		}
		
		printf("\n");
	}
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
			{
				for (x = 0; x < j; x++)
				{
					printf("	");
					
				}
				
				printf("%d x %d\n", m[i][j], k);
				m[i][j] *= k;
			
			}
			
		}
		
	}
	
	printf("\n\nO resultado da multiplicação é: \n\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", m[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
