#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void inverteString(char *str)
{
	int j;
	int i = strlen(str) - 1;
	char strInv[256];
	
	for(j = 0; j < strlen(str); j++)
	{
		strInv[j] = str[i];
		
		i--;
	}

	printf("A frase digitada invertida é igual a:\n'%s'", strInv);
	
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
    
	inverteString(str);
	
	return 0;
}
