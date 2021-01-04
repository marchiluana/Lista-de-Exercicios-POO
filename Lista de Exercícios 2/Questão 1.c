#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int i;
    int nums[3];
	int maior;
	int menor;
	int meio = 0;


  	for(i = 0; i < 3; i++)
  	{
  		
	    printf("Digite o %dº número: ", i + 1);
		scanf("%d", &nums[i]);
    
    	if(i == 0)
		{
	      maior = nums[i];
	      menor = nums[i];
	      meio = nums[i];
    	}

    	if(nums[i] > maior) 
		{
			maior = nums[i];
		}
	
    	else if	(nums[i] < menor)
		{
		 	menor = nums[i];
		}
  	}


  	for(i = 0; i < 3; i++)
  	{
  		
    	if((nums[i] < maior) && (nums[i] > menor))
		{
			meio = nums[i];
		}
  	}

    	printf("%d, %d, %d", menor, meio, maior);
    	
    	return 0;
}
