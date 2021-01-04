#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Escreva sua idade para checarmos se pode votar ou não: ");
	scanf("%d", &idade);
	
	if ((idade >= 18) && (idade <= 65))
	{
		printf ("Voto Obrigatório!");
	}
	
	else if ((idade >= 16) && (idade < 18) || (idade > 65))
	{
		printf("Voto facultativo!");
	}
	
	else
	{
		printf("Voce não pode votar!");
	}
	
	return 0;
}
