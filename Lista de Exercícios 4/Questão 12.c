#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int minuscula(char c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
		
		printf("O caractere digitado representa uma letra maiúscula, convertido pra minúscula fica %c!", c);
	}
	
	else
	{
		printf("O caractere digitado representa uma letra maiúscula logo ele não precisa de conversão: %c!", c);
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char c;
	
	printf("Digite um caractere: ");
	c = getc(stdin);
	
	minuscula(c);
	
	return 0;
}
