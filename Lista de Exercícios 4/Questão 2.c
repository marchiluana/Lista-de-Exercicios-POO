#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define LENGTH 10

void melhorNota(char alunos[100][20], float media[20])
{

    char aluno[20];
    int i, j;
    
    for(i = 0; i < LENGTH; i++)
    {    
        printf("Digite o nome do %dº aluno: ", i + 1);
        scanf("%s", &alunos[i]);
        
        printf("Digite sua média: ");
        scanf("%f", &media[i]);
    }
    
    float maior = media[0];
    
    for(j = 0; j < LENGTH; j++)
    {
        if (media[j] > maior)
        {
            maior = media[j];
            strcpy(aluno, alunos[j]);
        }
    }
    
    printf("O melhor desempenho foi do aluno %s, com média %.2f!", aluno, maior);
    
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char alunos[100][20];
    float media[100];
    
    melhorNota(alunos, media);

    fflush(stdin);
    getchar();
    
    return 0;
}
