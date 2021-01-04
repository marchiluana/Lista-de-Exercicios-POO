#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float notas[10];
	float media = 0;
	
	for(i = 1; i < 11; i++)
	{
		printf("Digite a nota do %d aluno: ", i);
		
		i--;
		scanf("%f", &notas[i]);
			
		media += notas[i];

		i++;
	}
	
	media /= 10;
	
	printf("A media aritmética dos 10 alunos é %.2f!", media);
	
	return 0;
}
