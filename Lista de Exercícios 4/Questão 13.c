#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char convMinuscula(char *str, int i)
{
	str[i] += 32;	
	
	return str[i];
	
}

char convMaiuscula(char *str, int i)
{
	str[i] -= 32;	
	
	return str[i];	
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	char f[256];
    char str[256];
    
    printf("Digite uma frase: ");
    fgets(f, 255, stdin);
    sscanf(f, "%[^\n]s", str);
	
	while(str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			convMaiuscula(str, i);
		}
		
		else if (str[i] >= 65 && str[i] <= 90)
		{
			convMinuscula(str, i);
		}
		
		i++;
	}
	
	printf("A frase com as maísculas trocadas pelas minúsculas e vice-versa é igual a: \n '%s'", str);
	
	return 0;
}
