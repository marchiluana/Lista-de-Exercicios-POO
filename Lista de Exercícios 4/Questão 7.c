#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int conta_palavra(char frase[])
{
	int i = 0;
	int j = 1;
	
	while(frase[i] != '\0')
	{
		if(frase[i] == ' ')
		{
			j++;	
		}
		
		i++;
	}
	
	return j;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char f [256];
	char frase [256];
	
	printf("Digite uma frase: ");
	fgets(f, 255, stdin);
    sscanf(f, "%[^\n]s", frase);
	
	printf("O número de palavras na frase é igual a %d!", conta_palavra(frase));
	
	return 0;	
}
