#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main (){

setlocale(LC_ALL,"Portuguese");
int idade[2];
char nome[2][100];
float nota[2],peso[2];

for (int i = 0; i < 3; i++)
{
printf("------------------------------");
printf("\n");
printf("CADASTRANDO %d ª PESSOA",i+1);
printf("\n");
printf("------------------------------");
printf("\n");
printf("NOME: ");
gets(&nome[i]);
fflush(stdin);
printf("IDADE: ");
scanf("%d", &idade[i]);
fflush(stdin);
printf("NOTA: ");
scanf("%f", &nota[i]);
fflush(stdin);
printf("PESO: ");
scanf("%f", &peso[i]);
fflush(stdin);
}


system("cls");


printf("----------------------------------------------------------------------------------------");
printf("\n");
printf("                         RELATORIO DOS ALUNOS CADASTRADOS");
printf("\n");
printf("----------------------------------------------------------------------------------------");
printf("\n");
printf("\n");
printf("|\tNOME\t\t|\tIDADE\t|\tNOTA\t|\tPESO\t|");

for (int i = 0; i < 2; i++)
{
printf("\n");
printf("|\t%s\t\t|\t%d\t|\t%.2f\t|\t%.2f\t|",nome[i],idade[i],nota[i],peso[i]);


}
printf("\n");
printf("\n");
printf("----------------------------------------------------------------------------------------");

}