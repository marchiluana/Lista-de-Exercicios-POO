#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	int soma;
	int i;
	float media;
	
	printf("Digite quantos números quiser, pra encerrar a contagem escreva o número '30000'! \n\n");
	
	while(n != 30000)
	{
		printf("Digite um número: ");
		scanf("%d",&n);
		
		soma += n;
		
		i++;
		
	}
	
	soma -= 30000;
	printf("A soma dos números digitados é: %d \n",soma);
	
	i = i-1;
	media = soma / i;
	printf("A média dos números digitados é: %.2f", media);
	
	return 0;
}
