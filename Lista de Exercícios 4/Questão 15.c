#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int conta_char ( char *str, char original, char novo)
{
	int i = 0;
	
	while(str[i] != '\0')
	{
		if(str[i] == original)
		{
			str[i] = novo;
		}
		
		i++;
	}
	
	printf("A letra '%c' substituida pela letra '%c' na frase digitada é igual a: \n '%s'", original, novo, str);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char original;
	char novo;
	
	char f[256];
    char str[256];
    
    printf("Digite uma frase: ");
    fgets(f, 255, stdin);
    sscanf(f, "%[^\n]s", str);
    
    printf("Digite a letra a ser substituída: ");
    original = getc(stdin);
    
    fflush(stdin);
    
    printf("Digite a letra substituta: ");
    novo = getc(stdin);
    
	
	conta_char (str, original, novo);
	
	return 0;
}
