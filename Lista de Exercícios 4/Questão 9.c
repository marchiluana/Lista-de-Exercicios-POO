#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int letra(char c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		printf("O caractere é uma letra!");
	}
	
	else
	{
		printf("O caractere não é uma letra!");
	}
	
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	char c;
	
	printf("Digite seu caractere: ");
	c = getc(stdin);
	
	letra(c);
}
