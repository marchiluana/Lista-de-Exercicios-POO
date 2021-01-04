#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float kg;
	float g;
	
	printf("Digite um valor em Kilogramas para que o programa converta pra gramas: ");
	scanf("%f", &kg);
	
	g = kg * 1000;
	
	printf("%.2f kg em gramas é igual a %.2f g", kg, g);
	
	return 0;
}
