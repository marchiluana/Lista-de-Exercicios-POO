#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void ocorrencias_caractere(char *str, char c) 
{
	int x = 0;
	int j = 0;
	int primeira;
	
	while(x < strlen(str))
	{
		if (str[x] == c)
		{
			if(j == 0)
			{
				primeira = x;
				
				j++;
			}
			
			else
			{
				j++;
			}
		}
		
		x++;
	}
	
	if (j == 0)
	{
		printf("O caractere digitado não foi encontrado na frase!");
	}
	
	else
	{
		printf("A primeira ocorrência do caractere '%c' na frase é na posição %d! \nO caractere foi encontrado %d vezes na frase!",c ,primeira + 1, j);
	}

}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char c;
	
	char f[256];
    char str[256];
    
    printf("Digite uma frase: ");
    fgets(f, 255, stdin);
    sscanf(f, "%[^\n]s", str);
    
    printf("Digite um caractere: ");
    c = getc(stdin);
    
	ocorrencias_caractere(str, c);
	
	return 0;
}
