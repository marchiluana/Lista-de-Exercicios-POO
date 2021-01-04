#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	int n [10];
	int x = 0;
	
	for (i = 0; i < 10; i++)
	{
		
		n[i] = i + 1;
		
		printf("%d ", n[i] );
		
		
		for (x = i - 1; x > -1; x--)
		{
			printf("%d ", n[x]);
			
		}
		
		printf("\n");
		
	}
	
	
	return 0;
}
