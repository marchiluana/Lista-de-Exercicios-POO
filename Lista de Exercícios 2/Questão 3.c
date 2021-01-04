#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i = 100; i >= 1; i--
	)
	{
		printf("%d \n",i);
	}
	
	return 0;
}
