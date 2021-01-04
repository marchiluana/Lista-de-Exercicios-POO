#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int perguntar(char *senhaTent[256])
{
	char f[256];
    
    printf("Digite a senha: ");
    fgets(f, 255, stdin);
    sscanf(f, "%[^\n]s", senhaTent);
    
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int y = 0;
	int x = 0;
	int i = 0;
	int j = 3;
	int isSenha = 0;
	char senhaTent[256];
	char senha [] = "Hello World!";
	
	perguntar(senhaTent);
    
    while(isSenha == 0)
    {	
		for(x = 0; x < strlen(senhaTent) ; x++)
		{
	    	if (senhaTent[x] == senha[x])
	    	{
	    		isSenha = 1;
			}
	
			else
			{
				while (i < 4)
				{
					printf("Senha inválida tente novamente! \n%d tentativas restantes!\n\n", j);
					
					i++;
					j--;
					
					break;
				}
				
				if (i == 4)
				{
					printf("Tentativas acabaram, sinto muito :(");
					
					isSenha = 2;
					break;
				}
			
				perguntar(senhaTent);
			}
		}	
	}
	
	if (isSenha == 1)
	{
		printf("Senha aceita!");
	}
	
	
	
	
	
	return 0;
}
