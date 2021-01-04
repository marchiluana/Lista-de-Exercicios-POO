#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for (i = 1; i <= 300; i++)
	{
		if (i % 2 == 0)
		{ 
			printf("%d \n", i);		
		}
	}
	
	return 0;
}
