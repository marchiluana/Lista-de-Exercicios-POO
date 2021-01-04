#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ast (char nome[100])
{
	int i;
	
	for(i = 0; i < strlen(nome); i++)
	{
		printf("*");
	}

}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[100];
	
	printf("Digite o seu nome: ");
	gets(nome);
	
	printf("\n%s\n", nome);
	
	ast(nome);
	
	printf("\n\nDigite a sua cidade: ");
	gets(nome);
	
	printf("\n%s\n", nome);
	
	ast(nome);
	
			
	return 0;	
}



