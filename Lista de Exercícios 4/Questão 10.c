#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int digito(char c)
{
	if (c >= 48 && c <= 57)
	{
		printf("O caractere é uma digito!");
	}
	
	else
	{
		printf("O caractere não é uma digito!");
	}
	
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	char c;
	
	printf("Digite seu caractere: ");
	c = getc(stdin);
	
	digito(c);
	
	return 0;
}
