#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void shift_string( char *str )
{
	int i = 0;
	
	while(str[i] != '\0')
	{
		str[i] += 1; 
		
		i++;
	}
	
	printf("A nova frase com as respectivas letras sucessoras é igual a: \n '%s'", str);
	
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
    
	shift_string(str);
	
	return 0;
}
