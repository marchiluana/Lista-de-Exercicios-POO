#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	char linha [100];
	int a = 0;
	int e = 0;
	int i = 0;
	int o = 0;
	int u = 0;
	int x;
	int soma;
	
	printf("Escreva uma linha de texto e o programa imprimirá o total de caracteres da linha!\n\n");
	
	printf("Escreva a linha de texto: ");
	fgets(linha, sizeof(linha), stdin);
	
	for(x = 0; x <= strlen(linha); x++)
	{
    
		if (linha[x] == 'a')
		{
			a++;
		} 

		if (linha[x] == 'e')
		{
			e++;
		}
		
		if (linha[x] == 'i')
		{
			i++;
		}
		
		if (linha[x] == 'o')
		{
			o++;
		}
		
		if (linha[x] == 'u')
		{
			u++;
		}
	}
  
  	soma = a + e + i + o + u;
 	printf("\nO número de vogais da linha é %d! \n\n", soma);
  	printf("a = %d \n", a);
  	printf("e = %d \n", e);
  	printf("i = %d \n", i);
  	printf("o = %d \n", o);
  	printf("u = %d", u);
	
	return 0;
}
