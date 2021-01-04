#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int conta_vogais(char *str)
{
    int i = 0;
    int j = 0;
    char c;
    
    while(str[i] != '\0')
    {
        c = str[i];
        
        switch (c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                j++;
                break;
        }
        
        i++;
    }
    
    return j;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char f[256];
    char str[256];
    
    printf("Digite uma frase: ");
    fgets(f, 255, stdin);
    sscanf(f, "%[^\n]s", str);
    
    printf("O comprimento da frase é igual a %d!", conta_vogais(str));
    
    return 0;    
}
