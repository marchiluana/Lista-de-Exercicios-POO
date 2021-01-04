#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	char n[10];
	int i;
	
	printf("Digite um número: ");
  	scanf("%s", n);

  	printf("Os números digitados soletrados são: ");

	for(i = 0; i < strlen(n); i++)
	{	
		switch (n[i])
		{
			case '1':
			printf("um");
     		break;
			
			case '2':
			printf("dois");
      		break;

			case '3':
			printf("três");
      		break;

			case '4':
			printf("quatro");
     		break;

			case '5':
			printf("cinco");
      		break;
      
			case '6':
			printf("seis");
      		break;

			case '7':
			printf("sete");
      		break;

			case '8':
			printf("oito");
      		break;

			case '9':
			printf("nove");
      		break;

			default:
			printf("Digite um número!");	
		}

	  	if (i == strlen(n) - 1)
	    {
	      printf(".");
	    }
	
	    else
	    {
	      printf(", ");
	    }
	}
	
	return 0;
}
