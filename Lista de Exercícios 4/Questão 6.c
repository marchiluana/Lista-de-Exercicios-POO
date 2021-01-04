#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int tamanho(char frase[])
{
	int i = 0;
	
	while(frase[i] != '\0')
	{
		i++;
	}
	
	return i;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char f [256];
	char frase [256];
	
	printf("Digite uma frase: ");
	fgets(f, 255, stdin);
    sscanf(f, "%[^\n]s", frase);
	
	printf("O comprimento da frase é igual a %d!", tamanho(frase));
	
	return 0;	
}
