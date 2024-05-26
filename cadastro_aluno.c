#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main (){

setlocale(LC_ALL, "Portuguese");
int idade,idade2,idade3;
char nome[50],nome2[50],nome3[50];
float nota,peso,nota2,peso2,nota3,peso3;

printf("------------------------------");
printf("\n");
printf("CADASTRANDO PRIMEIRA PESSOA");
printf("\n");
printf("------------------------------");
printf("\n");
printf("NOME: ");
gets(nome);
fflush(stdin);
printf("IDADE: ");
scanf("%d", &idade);
fflush(stdin);
printf("NOTA: ");
scanf("%f", &nota);
fflush(stdin);
printf("PESO: ");
scanf("%f", &peso);
fflush(stdin);

printf("------------------------------");
printf("\n");
printf("CADASTRANDO SEGUNDA PESSOA");
printf("\n");
printf("------------------------------");
printf("\n");
printf("NOME: ");
gets(nome2);
fflush(stdin);
printf("IDADE: ");
scanf("%d", &idade2);
fflush(stdin);
printf("NOTA: ");
scanf("%f", &nota2);
fflush(stdin);
printf("PESO: ");
scanf("%f", &peso2);
fflush(stdin);

printf("------------------------------");
printf("\n");
printf("CADASTRANDO TERCEIRA PESSOA");
printf("\n");
printf("------------------------------");
printf("\n");
printf("NOME: ");
gets(nome3);
fflush(stdin);
printf("IDADE: ");
scanf("%d", &idade3);
fflush(stdin);
printf("NOTA: ");
scanf("%f", &nota3);
fflush(stdin);
printf("PESO: ");
scanf("%f", &peso3);
fflush(stdin);

system("cls");

printf("----------------------------------------------------------------------------------------");
printf("\n");
printf("                         RELATORIO DOS ALUNOS CADASTRADOS");
printf("\n");
printf("----------------------------------------------------------------------------------------");
printf("\n");
printf("\n");

printf("|\tNOME\t\t|\tIDADE\t|\tNOTA\t|\tPESO\t|");
printf("\n");
printf("|\t%s\t\t|\t%d\t|\t%.2f\t|\t%.2f\t|",nome,idade,nota,peso);
printf("\n");
printf("|\t%s\t\t|\t%d\t|\t%.2f\t|\t%.2f\t|",nome2,idade2,nota2,peso2);
printf("\n");
printf("|\t%s\t\t|\t%d\t|\t%.2f\t|\t%.2f\t|",nome3,idade3,nota3,peso3);

printf("\n");
printf("\n");
printf("----------------------------------------------------------------------------------------");

}