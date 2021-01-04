#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Luana De Marchi
//Brena Kellyane
//José Hiago

float soma (float a, float b)
{
	float so;
	so = a + b;
	return so;
}

float subtracao (float a, float b)
{
	float sub;
	sub = a - b;
	return sub;
}

float multiplicacao (float a, float b)
{
	float mult;
	mult = a * b;
	return mult;
}

float divisao (float a, float b)
{	float div;
	div = a / b;
	return div;
}



int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float x, y, ss, s, m, d;
	int menu;
	
	do
	{
		
		printf("---MENU---\n1-Soma \n2-Subtração \n3-Multiplicação \n4-Divisão \n0-Sair\n------------ \n\nEscolha uma das opções: ");
		scanf("%d",&menu);
		
		if((menu > 0) && (menu <= 4))
		{
			printf("\nDigite o primeiro valor: ");
			scanf("%f",&x);
			
			printf("Digite o segundo valor: ");
			scanf("%f",&y);
		}
		
		else if(menu == 0)
		{
			printf("Adeus!");
			break;
		}
		
		else 
		{
			printf("\n!!! Digite um número dentre 1 - 4 !!!");
			
			getch ();
			system("cls");
			continue;
		}
		
		switch(menu)
		{
	
			case 0:
				break;
				
			case 1:
				ss = soma(x,y);
				printf("\nSoma: %.1f + %.1f = %.1f", x, y, ss);
				break;
				
			case 2:
				s = subtracao(x,y);
				printf("\nSubtração: %.1f - %.1f = %.1f", x, y, s);
				break;
				
			case 3:
				
				m = multiplicacao(x,y);
				printf("\nMultiplicação: %.1f x %.1f = %.1f", x, y, m);
				break;
				
			case 4:
				d = divisao(x,y);
				printf("\nDivisão: %.1f / %.1f = %.1f", x, y, d);
				break;
		
			default:
				("Digite um número dentre os citados!");
		}
		
		getch();
		
		system("cls");
		
	}while(menu!=0);
	
	return 0;
}
