#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float nota[3];
    char nome[3][200];
    float media[3],soma;
    


    for (int i = 0; i < 3; i++)
    {
    printf("Qual o nome do aluno?\n");
    scanf("%s", &nome[i]);
soma=0;
    for (int j = 0; j < 3; j++)
    {
        printf("Qual a %dª nota do aluno?\n", j+1);
        scanf("%f", &nota[j]);
        soma += nota[j];
    }
    media[i]=soma/3;
    }

    system("cls");

    printf("--------------------------------");
    printf("\n");

    printf("Notas Finais dos Alunos");
    printf("\n");

    printf("--------------------------------");
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s sua media foi: %.2f\n O aluno foi: %s\n", nome[i],media[i], (media[i]>=7)?"APROV":"REPROV");
        printf("\n");


    }
    

    

  
}