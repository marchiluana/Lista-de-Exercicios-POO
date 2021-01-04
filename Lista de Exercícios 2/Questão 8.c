#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float media;
	float n;
	int i;
	
	
	for (i = 1; i < 4; i++)
	{
		printf("Digite a sua %d nota: ",i);
		scanf("%f", &n);
		
		media += n;
		
	}	
	
	media /= 3;
	
	if (media >= 7)
	{
		printf("Você foi aprovado com média %.2f", media);
	}
	
	else if ((media > 3) && (media < 7))
	{
		printf("Você terá que fazer a prova final, pois sua media foi %.2f", media);
	}
	
	else
	{
		printf("Você foi reprovado com média %.2f", media);
	}
	
	return 0;
}
