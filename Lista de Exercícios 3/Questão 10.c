#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int convertDecimalToBinario (int decimal)
{
	int i, j;
	int binario [100];
	
	for (i = 0; decimal > 0; i++)
	{
		binario[i] = decimal % 2;		
		decimal /= 2;
	}
	
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", binario[j]);
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int decimal;
	
	printf("Digite o número decimal que será convertido pra binário: ");
	scanf("%d", &decimal);
	
	convertDecimalToBinario(decimal);
	
	return 0;
}
