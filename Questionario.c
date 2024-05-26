#include <stdio.h>


int main(){

    char * nome[30];
    int idade;

    printf("Qual o seu nome?\n");
    scanf("%s", &nome);

    printf("Qual a sua idade?\n");
    scanf("%d", &idade);

    printf("Seu nome e: %s e sua idade e: %d \n", nome, idade);
    
    
    
    return 0;

}