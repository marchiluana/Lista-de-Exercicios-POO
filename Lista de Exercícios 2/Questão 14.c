#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    
     int i;
	 int n;
     char frase [200];
     
     printf("Escreva uma frase e o programa substituirá as letras 'a' por 'b'! \n");
     
     printf("\nDigite sua frase: ");
     gets(frase);
     
     fflush(stdin);

     
     for (i = 0, n = 0; i < 200; i++)
     {
         if (frase[i] == 'a')
         {
            frase[i] = 'b';
            n++; 
        }
     }
     
     printf("\nA substituição ficou: %s. \nAo todo %d caracteres foram modificados!", frase, n);
    
    return 0; 
}
