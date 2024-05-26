#include <stdio.h>

void main(){


    char nome[2][100];
    float nota1[2], nota2[2];
    float media[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Qual o nome do aluno?\n");
        fflush(stdin);
        gets(nome[i]);
        

        printf("Digite a primeira nota\n");
        scanf("%f", &nota1[i]);
        fflush(stdin);
        printf("Digite a segunda nota\n");
        scanf("%f", &nota2[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        media[i] = (nota1[i] + nota2[i]) /2;
    }

    for (int i = 0; i < 2; i++)
    {
        printf("O aluno %s tirou a nota media de: %.1f e foi %s\n", nome[i], media[i], (media[i] >= 7)? "Aprovado": "Reprovado");
    }
    
    
    
}