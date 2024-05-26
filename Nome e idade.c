#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese-Brazilian");

    char nome[50];
    int idade;

    printf("Digite seu nome:");
    scanf("%s", &nome);

    printf("Digite sua idade:");
    scanf("%d", &idade);

    printf("Seu nome é: %s, e sua idade e: %d",nome, idade);

}