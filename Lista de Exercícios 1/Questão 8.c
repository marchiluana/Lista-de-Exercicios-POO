#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	int w;
	
	printf("Digite um número para elevarmos ao cubo: ");
	scanf("%d",&x);
	
	x = x * x * x;
	
	
	printf("Digite um outro número: ");
	scanf("%d",&y);
	
	w = x + y;
	printf("A soma do primeiro número ao cubo com o segundo número é %d",w);
	
	return 0;
}
