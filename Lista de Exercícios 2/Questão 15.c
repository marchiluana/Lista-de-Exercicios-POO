#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	int s = 1;
	int a = 1;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	s += n;
	a -= n;
	
	printf("O sucessor do número %d é %d! \n", n, s );
	printf("O antecessor do número %d é %d!", n, -a);
	
	return 0;
}
