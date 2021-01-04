#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LENGTH 20

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int nums [LENGTH];
	int maior[LENGTH];
	int n1, n2;
	int i, x, y, k;
	
  //Capturando os números da lista
	for(i = 0; i < LENGTH; i++)
	{
		printf("Digite o %dº número: ", i + 1);
		scanf("%d", &nums[i]);
	}
	
    for(k = 0; k < LENGTH; k++)
    {
      for(x = 0; x < LENGTH; x++)
      {
      	
      	if (x == LENGTH - 1)
      	{
      		break;	
		}
		
        if(nums[x] > nums[x + 1])
        {
          n1 = nums[x];
          nums[x] = nums[x + 1];
          nums[x + 1] = n1;
        }
      }
    }

	for(y = 0; y < LENGTH; y++)
	{
		if (y > 0)
		{
			printf(", ");
		}
		
		printf("%d", nums[y]);
	}
	
	return 0;
}
