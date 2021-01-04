#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    int n[10];
    int i;
    int max;
    int min;
    
    printf ("Digite 10 números!\n\n");
    
    for (i = 0; i < 10; i++)
    {
        printf("n%d: ", i + 1);
        scanf("%d", &n[i]);
        
        if (i == 0)
        {
            min = n[0];
            max = n[0];
            
        }
        
        if (n[i] > max)
        {
            max = n[i];
        }    
        
        if (n[i] < min)
        {
            min = n[i];
        }
    }
    
    printf("O valor máximo dentre os 10 números é %d \n", max);
    printf("O valor mínimo dentre os 10 números é %d ", min);

	return 0;
}
