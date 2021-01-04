#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float n;
	float media;
	
	for (i = 0; i < 4; i++)
	{
		printf("Digite a nota %d: ", i + 1)/
		scanf("%f", &n);
		
		media += n;
		
	}
	
	media /= 4;
	
	printf("A média das 4 notas digitadas é %.2f",media);
	
	return 0;
}
