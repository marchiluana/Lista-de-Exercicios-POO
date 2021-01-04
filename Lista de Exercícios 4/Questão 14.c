#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int conta_char ( char *str, char letra )
{
	int i = 0;
	int j = 0;
	
	while(str[i] != '\0')
	{
		if(str[i] == letra)
		{
			j++;
		}
		
		i++;
	}
	
	printf("A quantidade de vezes que a letra %c apareceu na frase digitada foi %d!", letra, j);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	
	char f[256];
    char str[256];
    
    printf("Digite uma frase: ");
    fgets(f, 255, stdin);
    sscanf(f, "%[^\n]s", str);
    
    printf("Digite uma letra: ");
    letra = getc(stdin);
	
	conta_char (str, letra);
	
	return 0;
}
